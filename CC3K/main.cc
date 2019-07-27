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



int main(void){

	Posn p;
	p.x = 1;
	p.y = 1;

	Player *p1 = new Human(140, 0, p);
	Player *p2 = new Orc(180, 0, p);
	Player *p3 = new Elf(140, 0, p);
	Player *p4 = new Dwarf(100, 0, p);

	Enemy *e1 = new Werewolf(p, 1);
	Enemy *e2 = new Troll(p, 1);
	Enemy *e3 = new Goblin(p, 1);
	Enemy *e4 = new Merchant(p, 1);
	Enemy *e5 = new Vampire(p, 1);
	Enemy *e6 = new Phoenix(p, 1);

	std::cout << p1->getRace() << std::endl;
	//std::cout << p2->getRace() << std::endl;
	std::cout << p3->getRace() << std::endl;
	std::cout << p4->getRace() << std::endl;

	std::cout << "Player Atk: " << std::to_string(p1->getAtk()) << std::endl;
	std::cout << "Werewolf Def: " << std::to_string(e1->getDef()) << std::endl;

	//std::cout << std::to_string( (100/(100+e1->getDef())) * p1->getAtk()) << std::endl;
	//std::cout <<std::to_string( (int)(ceil((100.0/105.0) * 20))) << std::endl;





	std::cout << p1->dealDamage(e1) << std::endl;
	std::cout << p1->dealDamage(e1) << std::endl;
	std::cout << p1->dealDamage(e1) << std::endl;
	std::cout << p1->dealDamage(e1) << std::endl;
	std::cout << p1->dealDamage(e1) << std::endl;
	std::cout << p1->dealDamage(e1) << std::endl;


	std::cout << "Player Def: " << std::to_string(p1->getDef()) << std::endl;
	std::cout << "Phoenix Def: " << std::to_string(e1->getAtk()) << std::endl;

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




}