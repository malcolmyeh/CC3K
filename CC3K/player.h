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
		bool barrier();
		int chamber();
		int getMaxHP();
		virtual std::string dealDamage(Character * opponent);
		void takeDamage(int amount) override;
		void move(Posn position) override;
};

#endif