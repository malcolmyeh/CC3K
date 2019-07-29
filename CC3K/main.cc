//Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246
#include <iostream>
#include <string>
#include "floor.h"
#include "game.h"


int main(void) {
	Floor floor;
	
	Posn p = {4, 4};
	Player *play =  new Human(100, 100, p);

	floor.player = play;
	floor.displayGrid[3][3] = '@';

	std::string s;
	printFloor(floor);
	while (std::cin >> s) {
		std::string ss = s;
		if (validDirection(ss)) {
			Posn pos = floor.player->position.getNew(ss);
			if (floor.validMove(pos)) {
				floor.displayGrid[floor.player->position.y - 1][floor.player->position.x - 1] = 
				floor.defaultGrid[floor.player->position.y - 1][floor.player->position.x - 1];
				floor.player->position = pos;
				floor.displayGrid[pos.y - 1][pos.x - 1] = '@';
				printFloor(floor); 
			} else {
				std::cout << "Move invalid" << std::endl;
			}
		} else {
			std::cout << "Bad input" << std::endl;
		}
	}

	delete play;
}