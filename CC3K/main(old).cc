//Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246
#include <iostream>
#include <string>
#include <fstream>
#include "floor.h"
#include "game.h"

bool validDir(std::string s) {
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; i++) {
		if (s == dir[i]) { return true; }
	}
	return false;
}

int main(void)
{
    Floor floor;
    Floor *f = &floor;
    std::ifstream in ("map.txt");
    std::string str;
    for (int i = 0; i < 25; i++)
    {
        getline(in, str);
        for (int j = 0; j < 79; j++)
        {
            floor.displayGrid[i][j] = str[j];
            floor.defaultGrid[i][j] = str[j];
        }
    }

    std::string s;
    floor.initFloor('h');

    system("CLS");
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 79; j++) {
			std::cout << floor.displayGrid[i][j];
		}
		std::cout << std::endl;
	}
    while (std::cin >> s)
    {
        std::string ss = s;
        if (validDir(ss))
        {
            Posn pos = floor.player->position.getNew(ss);
            if (floor.validMove(pos))
            {
                floor.displayGrid[floor.player->position.y][floor.player->position.x] =
                    floor.defaultGrid[floor.player->position.y][floor.player->position.x];
                floor.player->position = pos;
                floor.displayGrid[pos.y][pos.x] = '@';
                system("CLS");
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 79; j++) {
					std::cout << floor.displayGrid[i][j];
				}
				std::cout << std::endl;
			}
            }
            else
            {
                std::cout << "Move invalid" << std::endl;
            }
        }
        else
        {
            std::cout << "Bad input" << std::endl;
        }
    }

}
