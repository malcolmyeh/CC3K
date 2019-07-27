#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character {
	protected:
		bool hasCompass;
		int chamberID;
	public:
		std::string dealDamage(Character * opponent); 
		bool compass();
		int cID();
		bool withinRange(Player * player);
};


#endif