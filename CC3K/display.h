#ifndef DISPLAY_H
#define DISPLAY_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include "floor.h"

class Display {
private:
	char displayGrid[25][79];

public:
	void readFloor(std::string file);
	void printFloor();
	void updateDisplay(Floor *floor);
	char getChar(int i, int j);
};

#endif