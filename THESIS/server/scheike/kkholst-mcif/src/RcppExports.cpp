// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;
using namespace arma;

// loglikout
double loglikout(mat sigma, vec u, unsigned ncauses, imat causes, mat alpha, mat dalpha, mat beta, mat gamma);
RcppExport SEXP mcif_loglikout(SEXP sigmaSEXP, SEXP uSEXP, SEXP ncausesSEXP, SEXP causesSEXP, SEXP alphaSEXP, SEXP dalphaSEXP, SEXP betaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< vec >::type u(uSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncauses(ncausesSEXP);
    Rcpp::traits::input_parameter< imat >::type causes(causesSEXP);
    Rcpp::traits::input_parameter< mat >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< mat >::type dalpha(dalphaSEXP);
    Rcpp::traits::input_parameter< mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< mat >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikout(sigma, u, ncauses, causes, alpha, dalpha, beta, gamma));
    return rcpp_result_gen;
END_RCPP
}
// Dloglikout
rowvec Dloglikout(mat sigma, vec u, unsigned ncauses, imat causes, mat alpha, mat dalpha, mat beta, mat gamma);
RcppExport SEXP mcif_Dloglikout(SEXP sigmaSEXP, SEXP uSEXP, SEXP ncausesSEXP, SEXP causesSEXP, SEXP alphaSEXP, SEXP dalphaSEXP, SEXP betaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< vec >::type u(uSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncauses(ncausesSEXP);
    Rcpp::traits::input_parameter< imat >::type causes(causesSEXP);
    Rcpp::traits::input_parameter< mat >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< mat >::type dalpha(dalphaSEXP);
    Rcpp::traits::input_parameter< mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< mat >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(Dloglikout(sigma, u, ncauses, causes, alpha, dalpha, beta, gamma));
    return rcpp_result_gen;
END_RCPP
}
// D2loglikout
mat D2loglikout(mat sigma, vec u, unsigned ncauses, imat causes, mat alpha, mat dalpha, mat beta, mat gamma);
RcppExport SEXP mcif_D2loglikout(SEXP sigmaSEXP, SEXP uSEXP, SEXP ncausesSEXP, SEXP causesSEXP, SEXP alphaSEXP, SEXP dalphaSEXP, SEXP betaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< vec >::type u(uSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncauses(ncausesSEXP);
    Rcpp::traits::input_parameter< imat >::type causes(causesSEXP);
    Rcpp::traits::input_parameter< mat >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< mat >::type dalpha(dalphaSEXP);
    Rcpp::traits::input_parameter< mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< mat >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(D2loglikout(sigma, u, ncauses, causes, alpha, dalpha, beta, gamma));
    return rcpp_result_gen;
END_RCPP
}
// loglik
arma::vec loglik(arma::mat sigma, unsigned ncauses, imat causes, arma::mat alpha, arma::mat dalpha, arma::mat beta, arma::mat gamma, arma::mat eb0, int nq, double stepsize, unsigned iter, bool debug);
RcppExport SEXP mcif_loglik(SEXP sigmaSEXP, SEXP ncausesSEXP, SEXP causesSEXP, SEXP alphaSEXP, SEXP dalphaSEXP, SEXP betaSEXP, SEXP gammaSEXP, SEXP eb0SEXP, SEXP nqSEXP, SEXP stepsizeSEXP, SEXP iterSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< unsigned >::type ncauses(ncausesSEXP);
    Rcpp::traits::input_parameter< imat >::type causes(causesSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dalpha(dalphaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eb0(eb0SEXP);
    Rcpp::traits::input_parameter< int >::type nq(nqSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< unsigned >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik(sigma, ncauses, causes, alpha, dalpha, beta, gamma, eb0, nq, stepsize, iter, debug));
    return rcpp_result_gen;
END_RCPP
}
// loglikold
arma::vec loglikold(arma::mat y, arma::mat b, arma::mat sigma, arma::mat alph, arma::mat dalph, arma::mat tau, arma::mat eb0, int nq, double stepsize, unsigned iter, bool debug);
RcppExport SEXP mcif_loglikold(SEXP ySEXP, SEXP bSEXP, SEXP sigmaSEXP, SEXP alphSEXP, SEXP dalphSEXP, SEXP tauSEXP, SEXP eb0SEXP, SEXP nqSEXP, SEXP stepsizeSEXP, SEXP iterSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alph(alphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dalph(dalphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eb0(eb0SEXP);
    Rcpp::traits::input_parameter< int >::type nq(nqSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< unsigned >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikold(y, b, sigma, alph, dalph, tau, eb0, nq, stepsize, iter, debug));
    return rcpp_result_gen;
END_RCPP
}
// EB
arma::mat EB(arma::mat y, arma::mat b, arma::mat sigma, arma::mat alph, arma::mat dalph, arma::mat tau, double stepsize, unsigned iter, bool debug);
RcppExport SEXP mcif_EB(SEXP ySEXP, SEXP bSEXP, SEXP sigmaSEXP, SEXP alphSEXP, SEXP dalphSEXP, SEXP tauSEXP, SEXP stepsizeSEXP, SEXP iterSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alph(alphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dalph(dalphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< unsigned >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(EB(y, b, sigma, alph, dalph, tau, stepsize, iter, debug));
    return rcpp_result_gen;
END_RCPP
}
// logliktest
vec logliktest(arma::mat y, arma::mat b, arma::mat u, arma::mat sigma, arma::mat alph, arma::mat dalph, arma::mat tau);
RcppExport SEXP mcif_logliktest(SEXP ySEXP, SEXP bSEXP, SEXP uSEXP, SEXP sigmaSEXP, SEXP alphSEXP, SEXP dalphSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alph(alphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dalph(dalphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(logliktest(y, b, u, sigma, alph, dalph, tau));
    return rcpp_result_gen;
END_RCPP
}
// Dlogliktest
mat Dlogliktest(arma::mat y, arma::mat b, arma::mat u, arma::mat sigma, arma::mat alph, arma::mat dalph, arma::mat tau);
RcppExport SEXP mcif_Dlogliktest(SEXP ySEXP, SEXP bSEXP, SEXP uSEXP, SEXP sigmaSEXP, SEXP alphSEXP, SEXP dalphSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alph(alphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dalph(dalphSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(Dlogliktest(y, b, u, sigma, alph, dalph, tau));
    return rcpp_result_gen;
END_RCPP
}
// pn
double pn(arma::mat y, arma::mat mu, arma::mat sigma);
RcppExport SEXP mcif_pn(SEXP ySEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(pn(y, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// test
double test(int ncauses, imat causes, mat alpha, mat dalpha, mat beta, mat gamma);
RcppExport SEXP mcif_test(SEXP ncausesSEXP, SEXP causesSEXP, SEXP alphaSEXP, SEXP dalphaSEXP, SEXP betaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ncauses(ncausesSEXP);
    Rcpp::traits::input_parameter< imat >::type causes(causesSEXP);
    Rcpp::traits::input_parameter< mat >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< mat >::type dalpha(dalphaSEXP);
    Rcpp::traits::input_parameter< mat >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< mat >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(test(ncauses, causes, alpha, dalpha, beta, gamma));
    return rcpp_result_gen;
END_RCPP
}