//Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246
#include <iostream>
#include <fstream>
#include <string>
#include "posn.h"
#include "floor.h"
#include "character.h"
#include "player.h"
#include "human.h"


void print(Floor floor) {
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			std::cout << floor.displayGrid[i][j];
		}
		std::cout << std::endl;
	} 
}

bool check(std::string s) {
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; i++) {
		if (s == dir[i]) { return true; }
	}
	return false;
}

int main(void) {
	Floor floor;
	std::ifstream in;
	in.open("map.txt");
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			in >> floor.displayGrid[i][j];
		}
	}
	Posn p = {4, 4};
	Player *play =  new Human(100, 100, p);

	floor.player = play;
	floor.displayGrid[3][3] = '@';

	std::string s;
	while (std::cin >> s) {
		std::string ss = s;
		if (check(ss)) {
			Posn pos = floor.player->position.getNew(ss);
			if (floor.validTile(pos)) {
				floor.displayGrid[floor.player->position.y - 1][floor.player->position.x - 1] = '.';
				floor.player->position = pos;
				floor.displayGrid[pos.y - 1][pos.x - 1] = '@'; 
			} else {
				std::cout << "Try again" << std::endl;
			}
		} else {
			std::cout << "Try again" << std::endl;
		}
	}



	delete play;
}