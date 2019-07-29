#ifndef FLOOR_H
#define FLOOR_H

#include <cstdlib>
#include <ctime>
#include <vector>
#include "posn.h"
#include "stair.h"
#include "chamber.h"
#include "item.h"
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
#include "phoenix.h"
#include "vampire.h"
#include "werewolf.h"
#include "potion.h"
#include "gold.h"
#include "barriersuit.h"


class Floor {
private:
	int level;
	bool won;
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
	barrierSuit *suit; 
	bool knownPotion[6];

	Floor(int level, bool won, bool hostile, bool spawned, Player * player);
	Floor();
	~Floor();

	void initFloor(char type);
	void generatePlayer(char type, int &id);
	void generateStair(int id);
	void generateEnemies(int dragons);
	void generateItems(int &dragons);
	void generateChamber();
	void generatePosition(int &id, Posn &pos);
	Posn dragonPosition(Posn pos);
	void setCompass();
	std::string actEnemy();
	std::string movePlayer(std::string direction);
	std::string atkPlayer(std::string direction);
	bool validTile(Posn pos);
	bool validMove(Posn pos);
	void setLevel(int level);
	void setWon(bool won);
	void setHostile(bool hostile);
	void setSpawned(bool spawned);
	int getLevel();
	bool getWon();
	bool getHostile();
	bool getSpawned();
	std::string seePotion();
	
};

#endif