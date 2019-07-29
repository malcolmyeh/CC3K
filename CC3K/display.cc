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

void Display::printFloor(Floor *floor, std::string log){
	system("CLS");
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			std::cout << displayGrid[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "Race: " << floor->player->getRace() << 
	"                                                          Floor "
	<< floor->getLevel() << std::endl;
	std::cout << "Gold: " << floor->player->getGold() << std::endl;
	std::cout << "HP: " << floor->player->getHP() << std::endl;
	std::cout << "Atk: " << floor->player->getAtk() << std::endl;
	std::cout << "Def: " << floor->player->getDef() << std::endl;
	std::cout << "Action: " << log << std::endl;
	
}

void Display::updateDisplay(Floor *floor) {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			this->displayGrid[i][j] = floor->displayGrid[i][j]; 
		}
	}
}

char Display::getChar(int i, int j) {
	return this->displayGrid[i][j];
}