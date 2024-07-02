#pragma once

#include <iostream>
#include <opencv2/imgproc.hpp>

using namespace std;

class Coordinate {
public:
	int x;
	int y;
	int value;
	Coordinate(int xcoord, int ycoord, int val) {
		x = xcoord;
		y = ycoord;
		value = val;
	}
	cv::Point getPoint();
};