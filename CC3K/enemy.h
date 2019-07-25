#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character {
	protected:
		bool hasCompass;
	public:
		bool compass();
		bool withinRange(Player * player);
};


#endif