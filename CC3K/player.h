#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player : public Character {
	protected:
		int MaxHP;
		int curChamber;
		bool hasBarrier;
	public:

		virtual Player * getPlayer();
		void updateGold(int amount);
		bool hasBarrier();
		int curChamber();
		int getMaxHP();
		void move(Posn position);
};

#endif