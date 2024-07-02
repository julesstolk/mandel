#include "coordinate.hpp"
#include <opencv2/imgproc.hpp>

using namespace std;

cv::Point Coordinate::getPoint()
{
	return cv::Point(x, y);
}
