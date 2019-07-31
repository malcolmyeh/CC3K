#ifndef FLOOR_H
#define FLOOR_H

#include <cstdlib>
#include <ctime>
#include <string>
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
#include "buff.h"
#include "defbuff.h"
#include "atkbuff.h"


class Floor {
private:
	int level;
	bool merchantHostile;
	bool barrierSpawned;

public:
	char defaultGrid[25][79];
	std::vector<Enemy *> enemies;
	std::vector<Gold *> golds;
	std::vector<Potion *> potions; 
	std::vector<Chamber *> chambers; 
	char displayGrid[25][79];
	Stair * stair; 
	Player * player; 
	barrierSuit *suit; 
	bool knownPotion[6];

	Floor(int level, bool hostile, bool spawned);
	~Floor();

	void initFloor(char type);
	void initNext(char type, int HP, int gold, int Atk, int Def, bool hasBarrier);
	void generatePlayer(char type, int &id);
	void generateStair(int id);
	void generateEnemies(int dragons);
	void generateItems(int &dragons);
	void generateChamber();
	void generatePosition(int &id, Posn &pos);
	Posn dragonPosition(Posn pos);
	void assignCompass();
	std::string actEnemy();
	std::string movePlayer(std::string direction);
	std::string pickGold(Posn p);
	std::string atkPlayer(std::string direction);
	std::string seePotion(Posn p);
	std::string usePotion(std::string direction);
	bool validTile(Posn pos);
	bool validMove(Posn pos);
	void setLevel(int level);
	void setHostile(bool hostile);
	void setSpawned(bool spawned);
	int getLevel();
	bool getHostile();
	bool getSpawned();
	std::string talkMerchant(std::string direction);
	std::string buyMerchant(std::string option);
	
};

#endif

