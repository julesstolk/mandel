#include <iostream>
#include <opencv2/imgproc.hpp>
#include "mandel.hpp"
#include "screen.hpp"
#include "coordinate.hpp"
#include "shader.hpp"

using namespace std;
using namespace cv;

const int miniter = 0;
const int maxiter = 200;

const int height = 50;
const int width = 70;

int main() {

	Screen newScreen(height, width);
	Mandel mandel(maxiter);
	Shader shader;

	cout << newScreen.getCoordinates().size() << endl;

	for (int i = 0; i < newScreen.getCoordinates().size() - 1; i++)
	{
		cout << i << endl;
		Coordinate coord(newScreen.getCoordinates().at(i));
		cout << "ya" << endl;
		Point correctedPoint = newScreen.getCorrectedPoint(coord);
		cout << "ya" << endl;
		int value = shader.greyScale(miniter, maxiter, mandel.calcIter(coord));
		newScreen.editCoordinate(Coordinate(correctedPoint.x, correctedPoint.y, value), i);
	}

	newScreen.show();

	return 0;
}