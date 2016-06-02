#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]


int n_plus(int n){
    return(n++);
}