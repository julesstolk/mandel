#include <iostream>
#include "mandel.hpp"
#include "coordinate.hpp"
#include "screen.hpp"
#include "shader.hpp"

using namespace std;

const int miniter = 0;
const int maxiter = 20000;

int main() {

	Screen newScreen(1920, 1080);
	Mandel mandel(maxiter);
	Shader shader;

	for (int i = 0; i < newScreen.getCoordinates().size(); i++)
	{
		Coordinate coord(newScreen.getCoordinates().at(i));
		int value = shader.greyScale(miniter, maxiter, mandel.calcIter(coord));
		newScreen.editCoordinate(Coordinate(coord.x, coord.y, newScreen, value), i);
	}
	
	newScreen.show();
}