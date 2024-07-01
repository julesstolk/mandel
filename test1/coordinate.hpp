#include <iostream>
#include "screen.hpp"
#include <opencv2/imgproc.hpp>

using namespace std;

class Coordinate {
private:
	int x;
	int y;
	Screen screen;
	int value;
public:
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