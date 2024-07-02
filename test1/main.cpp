#include <iostream>
#include "mandel.hpp"
#include "screen.hpp"
#include "coordinate.hpp"
#include "shader.hpp"

using namespace std;

const int miniter = 0;
const int maxiter = 20000;

const int height = 1920;
const int width = 1080;

int main() {

	Screen newScreen(width, height);
	Mandel mandel(maxiter);
	Shader shader;

	for (int i = 0; i < newScreen.getCoordinates().size(); i++)
	{
		Coordinate coord(newScreen.getCoordinates().at(i));
		int value = shader.greyScale(miniter, maxiter, mandel.calcIter(coord));
		newScreen.editCoordinate(Coordinate(coord.x, coord.y, value), i);
	}

	newScreen.show();
}