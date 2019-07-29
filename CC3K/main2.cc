//testing for characters, players, enemies
#include "game.h"

#include "buff.h"
#include "atkbuff.h"
#include "defbuff.h"





int main(void) {
	srand(time(NULL));
	Posn p;
	p.x = 1;
	p.y = 1;

	Player *p1 = new Human(140, 10, p);
	Player *p2 = new Orc(180, 0, p);
	Player *p3 = new Elf(140, 0, p);
	Player *p4 = new Dwarf(100, 0, p);

	Enemy *e1 = new Werewolf(p, 1);
	Enemy *e2 = new Troll(p, 1);
	Enemy *e3 = new Goblin(p, 1);
	Enemy *e4 = new Merchant(p, 1);
	Enemy *e5 = new Vampire(p, 1);
	Enemy *e6 = new Phoenix(p, 1);

	Player *b11 = new AtkBuff(p1, 1);
	Player *b12 = new DefBuff(b11, 1);

	std::cout << "Human" << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;
	std::cout << e2->dealDamage(b12) << std::endl;


	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl;
	std::cout << b12->dealDamage(e2) << std::endl << std::endl;


	
	Player *b21 = new AtkBuff(p2, 1);
	Player *b22 = new DefBuff(b21, 1);
	std::cout << "Orc" << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;
	std::cout << e2->dealDamage(b22) << std::endl;

	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl;
	std::cout << b22->dealDamage(e2) << std::endl << std::endl;

	Player *b31 = new AtkBuff(p3, 1);
	Player *b32 = new DefBuff(b31, 1);
	std::cout << "Elf" << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;
	std::cout << e2->dealDamage(b32) << std::endl;

	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl;
	std::cout << b32->dealDamage(e2) << std::endl << std::endl;


	Player *b41 = new AtkBuff(p4, 1);
	Player *b42 = new DefBuff(b41, 1);
	std::cout << "Dwarf" << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;
	std::cout << e2->dealDamage(b42) << std::endl;

	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl;
	std::cout << b42->dealDamage(e2) << std::endl << std::endl;




	/*Item *i1 = new dragonHoard(p, NULL);
	Enemy *e7 = new Dragon(p, i1, NULL, 1);*/

	/*std::cout << "(no buff) " << std::endl;
	std::cout << "Atk: " << p1->getAtk() << std::endl;
	std::cout << "Def: " << p1->getDef() << std::endl << std::endl;

	Player *b1 = new AtkBuff(p1, 100);

	std::cout << "(atk100) " << std::endl;
	std::cout << "Atk: " << b1->getAtk() << std::endl;
	std::cout << "Def: " << b1->getDef() << std::endl << std::endl;

	Player *b2 = new DefBuff(b1, 100);

	std::cout << "(atk100, def100) " << std::endl;
	std::cout << "Atk: " << b2->getAtk() << std::endl;
	std::cout << "Def: " << b2->getDef() << std::endl << std::endl;

	Player *b3 = new AtkBuff(b2, 100);

	std::cout << "(atk100, def100, atk100) " << std::endl;
	std::cout << "Atk: " << b3->getAtk() << std::endl;
	std::cout << "Def: " << b3->getDef() << std::endl << std::endl;

	std::cout << "buff race: " << b3->getRace() << std::endl;
	std::cout << "buff symbol: " << b3->getSymbol() << std::endl;
	std::cout << "buff gold: " << b3->getGold() << std::endl;
	std::cout << "buff HP: " << b3->getHP() << std::endl;*/


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