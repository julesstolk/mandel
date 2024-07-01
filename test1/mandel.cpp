#include "mandel.hpp"
#include <complex>

using namespace std;

int Mandel::calcIter(complex<double> num) {

	return recursiveIter(num, num, 1);
}

int Mandel::recursiveIter(complex<double> num, complex<double> onum, int i) {

	num = (num * num) + onum;

	return (abs(num) > 2) ? i : recursiveIter(num, onum, i++);
}