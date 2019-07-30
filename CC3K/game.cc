#include "game.h"

Controller::~Controller() {
	delete floor;
	delete display;
}

std::string Controller::runGame(char type) {

	gameInit(type);

	display->printFloor(floor,"game start");
	while (true) {
		std::string moveStatus;
		std::string log;
		std::string str;
		std::cin >> str; 
		if (validDirection(str)) {
			moveStatus = floor->movePlayer(str);
			if (moveStatus == "invalid") {
				log += "Move is invalid.";
				display->printFloor(floor, log);
				continue;
			} else if (moveStatus == "newfloor") {
				return "quit";
			} else {
				log += moveStatus;
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
		log += floor->actEnemy();
		display->updateDisplay(floor);
		display->printFloor(floor, log);
		if (floor->player->getHP() == 0) {
			std::cout << std::endl;
			std::cout << "Game over!" << std::endl;
			std::cout << "Enter any command to continue:" << std::endl;
			cin >> str;
			return "loss";
		}	
	}
}

void Controller::gameInit(char type) {
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
	
	this->floor->initFloor(type);
	this->display->updateDisplay(floor);
	
	
}

bool validDirection(std::string s){
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; ++i){
		if (s == dir[i]){
			return true;
		}
	}
	return false;
}
	
