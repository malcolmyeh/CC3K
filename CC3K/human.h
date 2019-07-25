#ifndef PLAYER_H
#define PLAYER_H

#include "player.h"
#include <cmath>

class Human : public Player {
	public:
		Human(int HP, int gold, Posn position);
		~Human();
		void dealDamage(Character * opponent);
		void takeDamage(int amount);
}

#endif