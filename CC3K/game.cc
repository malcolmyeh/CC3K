#include "game.h"


void printFloor(Floor floor) {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			std::cout << floor.displayGrid[i][j];
		}
		std::cout << std::endl;
	} 
}

bool validDirection(std::string s) {
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; i++) {
		if (s == dir[i]) { return true; }
	}
	return false;
}