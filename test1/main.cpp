#include <iostream>
#include "mandel.hpp"
#include "screen.hpp"
#include "coordinate.hpp"
#include "shader.hpp"

using namespace std;

const int miniter = 0;
const int maxiter = 200;

const int height = 1080;
const int width = 1920;

int main() {

	Screen newScreen(height, width);
	Mandel mandel(maxiter);
	Shader shader;

	for (int i = 0; i < newScreen.getCoordinates().size(); i++)
	{
		cout << i / (height * width) << endl;
		Coordinate coord(newScreen.getCoordinates().at(i));
		int value = shader.greyScale(miniter, maxiter, mandel.calcIter(coord));
		newScreen.editCoordinate(Coordinate(coord.x, coord.y, value), i);
	}

	newScreen.show();
}