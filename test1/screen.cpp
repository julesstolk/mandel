#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include "screen.hpp"
#include "coordinate.hpp"

using namespace cv;

void Screen::addCoordinate(Coordinate coord)
{
	coordinates.push_back(coord);
}

vector<Coordinate> Screen::getCoordinates()
{
	return vector<Coordinate>();
}

void Screen::editCoordinate(Coordinate c, int i)
{
	coordinates.at(i) = c;
}

void Screen::show()
{
	Mat img(sizex, sizey, CV_8UC1, Scalar(255));

	for (Coordinate coord : coordinates) {
		img.at<uchar>(coord.getPoint()) = coord.getValue();
	}

	imshow("Mandelbrot", img);
	waitKey(0);
	
	return;
}
