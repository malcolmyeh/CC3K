#include "game.h"

std::string Controller::runGame(char type) {
	gameInit();
	while (true) {
		std::string moveStatus;
<<<<<<< HEAD
		std::string log;
=======
		std::string combatLog;
>>>>>>> 2e7f90a0e11fbee74afd234e9aaf8e8e2650d38b
		std::string str;
		std::cin >> str; 
		if (validDirection(str)) {
			moveStatus = floor->movePlayer(str);
<<<<<<< HEAD
			if (moveStatus == "valid") {
				log += "You move " + str + ".";
			} else if (moveStatus == "invalid") {
				log += "Move is invalid.";
			} else if (moveStatus == "newfloor") {
				//new floor
			}
		} else if (str == "a") {
			std::cin >> str;
			if (validDirection(str)) {
				log += floor->atkPlayer(str);
				//if (log == "Invalid attack. ") {}
			} else {
				//
			}
		} else if (str == "u") {
			cin >> str;
			if (validDirection(str)) {
				//
			} else {
				//
			}
		} else if (str == "r") {
			return "restart";
		} else if (str == "q") {
			return "quit";
		}
=======
			if (move)
		}  
>>>>>>> 2e7f90a0e11fbee74afd234e9aaf8e8e2650d38b
	}
}

void Controller::gameInit() {
<<<<<<< HEAD
	this->floor = new Floor();
	this->display = new Display();
	this->display->readFloor("map.txt");
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			char c = this->display->getChar(i, j);
			floor->displayGrid[i][j] = c;
			floor->defaultGrid[i][j] = c;
		}
	}
	
=======
	floor->initFloor(type);
>>>>>>> 2e7f90a0e11fbee74afd234e9aaf8e8e2650d38b
}

bool validDirection(std::string s) {
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; i++) {
		if (s == dir[i]) { return true; }
	}
	return false;
}