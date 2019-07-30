#include "game.h"

Controller::~Controller() {
	delete floor;
	delete display;
}

std::string Controller::runGame(char type) {

	gameInit(type);
	
	display->printFloor(floor,"You have entered the dungeon.");
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
				if (floor->getLevel() + 1 == 6) {
					return "won";
				}
				this->newFloor();
				log += "Welcome to Floor " + std::to_string(floor->getLevel()) + ". ";
				display->updateDisplay(floor);
				display->printFloor(floor, log);
				continue;
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
				log += floor->usePotion(str);
				if (log == "No potion in direction. ") {
					display->printFloor(floor, log);
					continue;
				}
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
			std::cin >> str;
			return "loss";
		}	
	}
}

void Controller::gameInit(char type) {
	this->floor = new Floor(1, false, false);
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

void Controller::newFloor() {
	Floor *tmpf = this->floor;
	Display *tmpd = this->display;
	Player *play = tmpf->player;
	int level = tmpf->getLevel() + 1;
	bool hostile = tmpf->getHostile();
	bool spawned = tmpf->getSpawned();
	char type;
	int HP = play->getHP();
	int gold = play->getGold();
	int Atk = play->getPlayer()->getAtk();
	int Def = play->getPlayer()->getDef();
	bool hasBarrier = play->barrier();

	if (play->getRace() == "Human") { type = 'h'; }
	if (play->getRace() == "Orc") { type = 'o'; }
	if (play->getRace() == "Elf") { type = 'e'; }
	if (play->getRace() == "Dwarf") { type = 'd'; }

	this->floor = new Floor(level, hostile, spawned);
	this->display = new Display();
	this->display->readFloor("map.txt");
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			char c = this->display->getChar(i, j);
			floor->displayGrid[i][j] = c;
			floor->defaultGrid[i][j] = c;
		}
	}

	this->floor->initNext(type, HP, gold, Atk, Def, hasBarrier);
	this->display->updateDisplay(floor);
	delete tmpf;
	delete tmpd;
}

double Controller::getScore() {
	if (floor->player->getRace() == "Human") { return (double)floor->player->getGold() * 1.5; }
	if (floor->player->getRace() == "Orc") { return (double)floor->player->getGold() / 2.0; }
	if (floor->player->getRace() == "Elf") { return (double)floor->player->getGold(); }
	if (floor->player->getRace() == "Dwarf") { return (double)floor->player->getGold() * 2.0; }
	return 0;
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
	
