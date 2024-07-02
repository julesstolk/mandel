#include "coordinate.hpp"
#include <opencv2/imgproc.hpp>

using namespace std;

void Coordinate::setValue(int val)
{
	value = val;
}

int Coordinate::getValue()
{
	return value;
}

cv::Point Coordinate::getPoint()
{
	return cv::Point(x, y);
}
