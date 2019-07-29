#include "game.h"

std::string Controller::runGame(char type) {
	gameInit();
	while (true) {
		std::string moveStatus;
		std::string combatLog;
		std::string str;
		std::cin >> str; 
		if (validDirection(str)) {
			moveStatus = floor->movePlayer(str);
			if (move)
		}  
	}
}

void Controller::gameInit() {
	floor->initFloor(type);
}

bool validDirection(std::string s) {
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; i++) {
		if (s == dir[i]) { return true; }
	}
	return false;
}