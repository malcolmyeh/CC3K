//Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246
#include <iostream>
#include <fstream>
#include <string>
<<<<<<< HEAD
#include "floor.h"
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
=======
#include <cmath>
#include <ctime>


#include "item.h"
#include "barriersuit.h"
#include "gold.h"
#include "dragon.h"




int main(void){
	srand(time(NULL));
	Posn p;
	p.x = 1;
	p.y = 1;

	Player *p1 = new Human(1000, 10, p);
	Player *p2 = new Orc(180, 0, p);
	Player *p3 = new Elf(14000, 0, p);
	Player *p4 = new Dwarf(100, 0, p);

	Enemy *e1 = new Werewolf(p, 1);
	Enemy *e2 = new Troll(p, 1);
	Enemy *e3 = new Goblin(p, 1);
	Enemy *e4 = new Merchant(p, 1);
	Enemy *e5 = new Vampire(p, 1);
	Enemy *e6 = new Phoenix(p, 1);



	Item *i1 = new dragonHoard(p, NULL);
	Enemy *e7 = new Dragon(p, i1, NULL, 1);

	//dwarf: forge weapons and shields
	std::cout << "Dwarf" << std::endl << std::endl << std::endl << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;
	std::cout << p4->dealDamage(e2) << std::endl;

	//orc: crit, lifesteal, BESERK
	std::cout << "Orc" << std::endl << std::endl << std::endl << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;
	std::cout << p2->dealDamage(e2) << std::endl;

	//elf: regen, stun
	std::cout << "Elf" << std::endl << std::endl << std::endl << std::endl;
	p3->takeDamage(139);
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	std::cout << p3->dealDamage(e2) << std::endl;
	std::cout << e2->dealDamage(p3) << std::endl;
	




	/*

	//werewolf: damage increases as health decreases
	std::cout << e1->dealDamage(p1) << std::endl;
	e1->takeDamage(30);
	std::cout << e1->dealDamage(p1) << std::endl;
	e1->takeDamage(30);
	std::cout << e1->dealDamage(p1) << std::endl;
	e1->takeDamage(30);
	std::cout << e1->dealDamage(p1) << std::endl;

	//troll: double attack
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;
	std::cout << e2->dealDamage(p1) << std::endl;

	// goblin: gold steal
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;
	std::cout << e3->dealDamage(p1) << std::endl;

	// vampire: life steal
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;
	std::cout << e5->dealDamage(p1) << std::endl;

	// phoenix: critical hit, reborn
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;
	std::cout << e6->dealDamage(p1) << std::endl;

	//dragon: chance to breath fire, heal after lower than 50
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	e7->takeDamage(149);
	std::cout << "dragon health: " + std::to_string(e7->getHP()) << std::endl << std::endl << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << e7->dealDamage(p1) << std::endl;
	std::cout << "dragon health: " + std::to_string(e7->getHP()) << std::endl << std::endl << std::endl;*/

>>>>>>> ead3794945c16689f9e30b5613204eac08dfa5bc
}