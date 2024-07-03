#include "mandel.hpp"
#include "coordinate.hpp"
#include <complex>
#include <iostream>

using namespace std;

int Mandel::calcIter(complex<double> num) {

	return recursiveIter(0, num, 0);
}

int Mandel::calcIter(Coordinate coord)
{
	complex<double> num(coord.x, coord.y);
	int amtiter = calcIter(num);
	return amtiter;
}

int Mandel::recursiveIter(complex<double> num, complex<double> onum, int i) {

	num = (num * num) + onum;

	return ((abs(num) > 2) || (i >= maxiter)) ? i : recursiveIter(num, onum, ++i);
}