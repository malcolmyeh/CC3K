#include "game.h"

std::string Controller::runGame(char type) {
	gameInit();
	while (true) {
		std::string moveStatus;
		std::string log;
		std::string str;
		std::cin >> str; 
		if (validDirection(str)) {
			moveStatus = floor->movePlayer(str);
			if (moveStatus == "valid") {
				log += "You move " + str + ".";
			} else if (moveStatus == "invalid") {
				log += "Move is invalid.";
				display->printFloor(floor, log);
				continue;
			} else if (moveStatus == "newfloor") {
				//new floor
			}
		} else if (str == "a") {
			std::cin >> str;
			if (validDirection(str)) {
				log += floor->atkPlayer(str);
				if (log == "Invalid attack. ") {
					display->printFloor(floor, log);
					continue;
				}
			} else {
				log += "Invalid input. Try again.";
				display->printFloor(floor, log);
				continue;
			}
		} else if (str == "u") {
			std::cin >> str;
			if (validDirection(str)) {
				//
				continue;
			} else {
				log += "Invalid input. Try again.";
				display->printFloor(floor, log);
				continue;
			}
		} else if (str == "r") {
			return "restart";
		} else if (str == "q") {
			return "quit";
		} else {
			log += "Invalid input. Try again.";
			display->printFloor(floor, log);
			continue;
		}
		floor->actEnemy();
	}
}

void Controller::gameInit() {
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
	
