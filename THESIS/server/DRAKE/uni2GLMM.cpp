//----------------------------------------------------------------------
//                                                     Henrique Laureano
//                                            henriquelaureano.github.io
//                                      2021-fev-18 · Curitiba/PR/Brazil
//----------------------------------------------------------------------

// A STANDARD MULTINOMIAL GLMM WITH A COMMON RANDOM INTERCEPT

#include <TMB.hpp>
template<class Type>
Type objective_function<Type>::operator() ()
{
  DATA_MATRIX(Y);
  DATA_SPARSE_MATRIX(Z); // Matrix::bdiag()

  PARAMETER(beta1);
  PARAMETER(beta2);
  
  PARAMETER(logsd1); Type sd1=exp(logsd1);
  PARAMETER(logsd2); Type sd2=exp(logsd2);

  PARAMETER_VECTOR(u1); vector<Type> Zu1=Z*u1;
  PARAMETER_VECTOR(u2); vector<Type> Zu2=Z*u2;

  Type risk1=0;
  Type risk2=0; Type level=0;

  vector<Type> y(Y.cols());
  vector<Type> prob(Y.cols());
  
  parallel_accumulator<Type> nll(this);
  // Type nll=0;
  nll -= dnorm(u1, Type(0), sd1, true).sum();
  nll -= dnorm(u2, Type(0), sd2, true).sum();
  
  for (int i=0; i<Y.rows(); i++) {

    risk1=exp(beta1 + Zu1(i));
    risk2=exp(beta2 + Zu2(i)); level=1 + risk1 + risk2;

    prob(0)=risk1/level;
    prob(1)=risk2/level; prob(2)=1 - prob(0) - prob(1);
    
    y=Y.row(i);
    nll -= dmultinom(y, prob, true);
  }
  ADREPORT(sd1);
  ADREPORT(sd2);
  
  return nll;
}
// END =================================================================
