#ifndef FLOOR_H
#define FLOOR_H

#include <cstdlib>
#include <ctime>
#include "posn.h"
#include "stair.h"
#include "chamber.h"
//#include "item.h"
#include "character.h"
#include "enemy.h"
#include "player.h"
#include "human.h"
#include "orc.h"
#include "elf.h"
#include "dwarf.h"
#include "goblin.h"
#include "dragon.h"
#include "troll.h"
#include "merchant.h"
#include "pheonix.h"
#include "vampire.h"
#include "werewolf.h"
#include "potion.h"
#include "gold.h"

class Floor {

	int level;
	bool won;
	bool stairVisible;
	bool merchantHostile;
	bool barrierSpawned;

public:
	char defaultGrid[25][79];
	std::vector<Enemy *> enemies;
	std::vector<Item *> items;
	std::vector<Chamber *> chambers;
	char displayGrid[25][79];
	Stair * stair;
	Player * player;

	Floor(int level, bool won, bool hostile, bool spawned, Player * player);
	Floor();
	~Floor();

	//void initFloor();
	void generatePlayer();
	void generateStair();
	void generateEnemies();
	//void generateItems();
	void generateChamber();
	void setDragons();
	void generatePosition(int &id, Posn &pos);
	bool validTile(Posn pos);
	bool validMove(Posn pos);
	void setVisible(bool visible);
	void setLevel(int level);
	void setWon(bool won);
	void setHostile(bool hostile);
	void setSpawned(bool spawned);
	bool getVisible();
	int getLevel();
	bool getWon();
	bool getHostile();
	bool getSpawned();
	
};

#endif