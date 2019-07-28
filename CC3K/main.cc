//testing for characters, players, enemies
#include "posn.h"
#include "character.h"
#include "player.h"
#include "enemy.h"
#include "human.h"
#include "dwarf.h"
#include "elf.h"
#include "orc.h"
//dragonhoard not yet implemented
#include "werewolf.h"
#include "troll.h"
#include "goblin.h"
#include "merchant.h"
#include "vampire.h"
#include "phoenix.h"
#include <iostream>
#include <string>
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

}