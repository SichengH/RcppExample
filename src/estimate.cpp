#include <Rcpp.h>
#include <n_plus.h>
using namespace Rcpp;

// [[Rcpp::export]]
List estimate(DataFrame data, double tol, int n, CharacterVector model_mode, int num_states) {

    //CharacterVector x = CharacterVector::create( "foo", "HMTree" )  ;
    //NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    n=n_plus(n);
    List z            = List::create(data,tol,n,model_mode,num_states) ;

    return z;
}
