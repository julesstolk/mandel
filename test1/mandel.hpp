#pragma once

#include <complex>
using namespace std;

class Mandel {
private:
	complex<double> num;
	int recursiveIter(complex<double> num, complex<double> onum, int i);
public:
	int maxiter;
	Mandel(int x) {
		maxiter = x;
	};
	int calcIter(complex<double> num);
	int calcIter(Coordinate coord);
};