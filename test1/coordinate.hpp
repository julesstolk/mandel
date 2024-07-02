#pragma once

#include <opencv2/imgproc.hpp>
#include "screen.hpp"

using namespace std;

class Coordinate {
public:
	int x;
	int y;
	Screen screen;
	int value;
	Coordinate(int xcoord, int ycoord, Screen thisScreen, int val) {
		x = xcoord;
		y = ycoord;
		screen = thisScreen;
		value = val;
	}
	void setValue(int val);
	int getValue();
	cv::Point getPoint();
};