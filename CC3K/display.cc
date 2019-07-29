#include "display.h"

void Display::readFloor(std::string file) {
	std::ifstream in (file);
	std::string str;
	for (int i = 0; i < 25; i++) {
		getline(in, str);
		for (int j = 0; j < 79; j++) {
			this->displayGrid[i][j] = str[j];
		}
	}
}

void Display::printFloor(){
	system("CLS");
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			std::cout << displayGrid[i][j];
		}
		std::cout << std::endl;
	} 
}

void Display::updateDisplay(Floor *floor) {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			this->displayGrid[i][j] = floor->defaultGrid[i][j]; 
		}
	}
}

char Display::getChar(int i, int j) {
	return this->displayGrid[i][j];
}