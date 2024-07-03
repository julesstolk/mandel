#include <iostream>
#include <opencv2/imgproc.hpp>
#include "mandel.hpp"
#include "screen.hpp"
#include "coordinate.hpp"
#include "shader.hpp"

using namespace std;
using namespace cv;

const int miniter = 0;
const int maxiter = 20;

const int pixelrows = 700;
const int pixelcolumns = 500;

const int minx = -2;
const int maxx = 2;
const int miny = -2;
const int maxy = 2;

int main() {

	Screen newScreen(pixelrows, pixelcolumns, minx, maxx, miny, maxy);
	Mandel mandel(maxiter);
	Shader shader;

	cout << "Total amount of coordinates: " << newScreen.getCoordinates().size() << endl;
	double progress;

	for (int i = 0; i < newScreen.getCoordinates().size() - 1; i++)
	{
		Coordinate coord(newScreen.getCoordinates().at(i));
		Point correctedPoint = newScreen.getCorrectedPoint(coord);
		int iter = mandel.calcIter(coord);
		int value = shader.greyScale(miniter, maxiter, iter);
		newScreen.editCoordinate(Coordinate(correctedPoint.x, correctedPoint.y, value), i);
	}

	newScreen.show();

	return 0;
}