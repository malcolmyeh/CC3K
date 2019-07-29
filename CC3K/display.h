#ifndef DISPLAY_H
#define DISPLAY_H

#include <fstream>

class Display {
private:
	char displayGrid[25][79];

public:
	void readFloor(std::string file);
	void printFloor();
}

#endif