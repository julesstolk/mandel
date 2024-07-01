#include <iostream>
#include <vector>

using namespace std;

class Screen {
private:
	vector<Coordinate> coordinates;
public:
	int sizex;
	int sizey;
	Screen(int x, int y) {
		sizex = x;
		sizey = y;
		for (int i = -(x/2); i < x/2; i++) {
			for (int j = y/2; j < -(y/2); j++) {
				coordinates.push_back(Coordinate(x, y, *this, 0));
			}
		}
	};
	Screen() {};
	void addCoordinate(Coordinate coord);
	vector<Coordinate> getCoordinates();
	void editCoordinate(Coordinate c, int i);
	void show();
};