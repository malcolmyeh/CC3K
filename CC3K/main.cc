//Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246
#include <iostream>
#include <fstream>
#include <string>
#include "posn.h"
#include "floor.h"
#include "character.h"
#include "player.h"
#include "human.h"
#include "game.h"



int main(void) {
	Floor floor;
	std::ifstream in ("map.txt");
	std::string str;
	for (int i = 0; i < 25; i++) {
		getline(in, str);
		for (int j = 0; j < 79; j++) {
			floor.displayGrid[i][j] = str[j];
			floor.defaultGrid[i][j] = str[j]; 
		}
	}
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
			if (floor.validTile(pos)) {
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