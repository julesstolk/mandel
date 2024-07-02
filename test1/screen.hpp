#pragma once

#include <iostream>
#include <vector>
#include "coordinate.hpp"
#include <iostream>

using namespace std;

class Screen {
private:
	vector<Coordinate> coordinates;
public:
	int sizex = 0;
	int sizey = 0;
	Screen(int x, int y) {
		sizex = x;
		sizey = y;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				coordinates.push_back(Coordinate(x - (sizex/2), y - (sizey/2), 0));
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