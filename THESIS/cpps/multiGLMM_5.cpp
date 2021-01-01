// multiGLMM: A MULTINOMIAL GLMM FOR CLUSTERED COMPETING RISKS DATA ====
// AUTHOR: HENRIQUE LAUREANO (leg.ufpr.br/~henrique)
// DATE: 11/14/2020 (MONTH / DAY / YEAR)
#include <TMB.hpp>
template<class Type>
Type objective_function<Type>::operator() ()
{
  using namespace density;
  // -------------------------------------------------------------------
  DATA_MATRIX(Y);
  DATA_SPARSE_MATRIX(Z); // Matrix::bdiag()
  DATA_VECTOR(T);
  DATA_SCALAR(delta);
  // -------------------------------------------------------------------
  PARAMETER(beta1);
  PARAMETER(beta2);
  PARAMETER(gama1);
  PARAMETER(gama2);
  PARAMETER(w1);
  PARAMETER(w2);
  PARAMETER_MATRIX(R);
  PARAMETER(logs2);
  // -------------------------------------------------------------------
  matrix<Type> RE = Z * R;
  Type eb1 = exp(beta1);
  Type eb2 = exp(beta2);
  Type p1_temp = eb1/(1 + eb1 + eb2);
  Type p2_temp = eb2/(1 + eb1 + eb2);
  vector<Type> middle1 = w1 * delta/(2 * T * (delta - T));
  vector<Type> middle2 = w2 * delta/(2 * T * (delta - T));
  vector<Type> x = 2 * T/delta - 1;
  vector<Type> atanh = 0.5 * log((1 + x)/(1 - x));
  vector<Type> tt1 = w1 * atanh - gama1 - RE.col(0).array();
  vector<Type> tt2 = w2 * atanh - gama2 - RE.col(1).array();
  vector<Type> ptt1 = dnorm(tt1, 0, 1, false);
  vector<Type> ptt2 = dnorm(tt2, 0, 1, false);
  vector<Type> p1 = p1_temp * middle1 * ptt1;
  vector<Type> p2 = p2_temp * middle2 * ptt2;
  vector<Type> p3 = 1 - p1 - p2;
  matrix<Type> ps(Y.rows(), 3);
  ps.col(0) = p1;
  ps.col(1) = p2;
  ps.col(2) = p3;
  // -------------------------------------------------------------------
  matrix<Type> Sigma(2, 2);
  Sigma.row(0) << exp(logs2), 0;
  Sigma.row(1) << 0, exp(logs2);
  // -------------------------------------------------------------------
  parallel_accumulator<Type> nll(this);
  // TO PARALLELIZE THE CODE THE FOLLOWING LINE MUST BE COMMENTED
  // Type nll = 0;
  // -------------------------------------------------------------------
  vector<Type> y(Y.cols());
  vector<Type> prob(ps.cols());
  for (int i = 0; i < Y.rows(); i++) {
    y = Y.row(i);
    prob = ps.row(i);
    nll -= dmultinom(y, prob, true);
  }
  for (int i = 0; i < R.rows(); i++) {
    nll += 2 * MVNORM(Sigma)(R.row(i));
  }
  return nll;
}
// END =================================================================
