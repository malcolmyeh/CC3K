#include "display.h"

void readFloor(std::string file) {
	std::ifstream in (file);
	std::string str;
	for (int i = 0; i < 25; i++) {
		getline(in, str);
		for (int j = 0; j < 79; j++) {
			floor.displayGrid[i][j] = str[j];
			floor.defaultGrid[i][j] = str[j]; 
		}
	}
}