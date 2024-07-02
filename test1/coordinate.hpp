#ifndef COORDINATE_H
#define COORDINATE_H

#include <iostream>
#include <opencv2/imgproc.hpp>

using namespace std;

class Coordinate {
private:
	int x;
	int y;
	int value;
public:
	Coordinate(int xcoord, int ycoord, int val) {
		x = xcoord;
		y = ycoord;
		value = val;
	}
	void setValue(int val);
	int getValue();
	cv::Point getPoint();
};

#endif