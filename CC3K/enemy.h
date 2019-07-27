#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character {
	protected:
		bool hasCompass;
		int chamberID;
	public:
		bool compass();
		int cID();
		bool withinRange(Player * player);
};


#endif