#include "mandel.hpp"
#include "coordinate.hpp"
#include <complex>

using namespace std;

int Mandel::calcIter(complex<double> num) {

	return recursiveIter(0, num, 1);
}

int Mandel::calcIter(Coordinate coord)
{
	complex<double> z1 = complex<double>(coord.x, coord.y);
	return calcIter(z1);
}

int Mandel::recursiveIter(complex<double> num, complex<double> onum, int i) {

	num = (num * num) + onum;

	return (abs(num) > 2) ? i : recursiveIter(num, onum, i++);
}