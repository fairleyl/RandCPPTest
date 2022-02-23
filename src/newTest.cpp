#include <Rcpp.h>
#include <vector>
using namespace Rcpp;

// [[Rcpp::export]]
std::vector<double> f(const double& x)
{
  std::vector<double> y {x, 2*x};
  return y;
}
