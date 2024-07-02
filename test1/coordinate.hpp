#include <opencv2/imgproc.hpp>
#include "screen.hpp"
#include <iostream>

using namespace std;

class Coordinate {
public:
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