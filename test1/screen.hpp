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
	Screen(int y, int x) {
		sizey = y;
		sizex = x;
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				coordinates.push_back(Coordinate(i - (sizex/2), j - (sizey/2), 0));
			}
		}
		cout << coordinates.size(); // line B
	};
	Screen() {
	};
	void addCoordinate(Coordinate coord);
	vector<Coordinate> getCoordinates();
	cv::Point getCorrectedPoint(Coordinate coord);
	void editCoordinate(Coordinate c, int i);
	void show();
};