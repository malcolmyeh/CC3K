#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"
#include "dragonhoard.h"
#include "barriersuit.h"

class Dragon : public Character {
	private:
		bool isHostile;
		Item *hoard;
		Item *suit;
	public:
		Dragon(Posn position, Item *hoard, Item *suit, int chamberID);
		~Dragon();
		Item *getHoard();
		Item *getSuit();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif