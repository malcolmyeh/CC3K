//Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246
#include <iostream>
#include <string>
#include "floor.h"
#include "game.h"


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

    printFloor(f);
    while (std::cin >> s)
    {
        std::string ss = s;
        if (validDirection(ss))
        {
            Posn pos = floor.player->position.getNew(ss);
            if (floor.validMove(pos))
            {
                floor.displayGrid[floor.player->position.y][floor.player->position.x] =
                    floor.defaultGrid[floor.player->position.y][floor.player->position.x];
                floor.player->position = pos;
                floor.displayGrid[pos.y][pos.x] = '@';
                printFloor(f);
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
