#pragma once

#include <iostream>
#include <vector>
#include "coordinate.hpp"
#include <iostream>

using namespace std;

class Screen {
private:
	vector<Coordinate> coordinates;
	int minx = 0, maxx = 0, miny = 0, maxy = 0;
public:
	int sizex = 0, sizey = 0;
	Screen(int y, int x, int minxa, int maxxa, int minya, int maxya) {
		sizey = y;
		sizex = x;
		minx = minxa;
		maxx = maxxa;
		miny = minya;
		maxy = maxya;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				int xcoord = i - (sizex / 2), ycoord = j - (sizey / 2);

				coordinates.push_back(Coordinate(xcoord, ycoord, 0));
			}
		}
	};
	Screen() {
	};
	void addCoordinate(Coordinate coord);
	vector<Coordinate> getCoordinates();
	cv::Point getCorrectedPoint(Coordinate coord);
	void editCoordinate(Coordinate c, int i);
	void show();
};