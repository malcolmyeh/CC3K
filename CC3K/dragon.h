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
<<<<<<< HEAD
		Item *getHoard();
		Item *getSuit();
=======
		void setPos(Posn pos);
>>>>>>> 055f0e2bcb1ccb9a14713063afbddde52d3e6c5c
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
		std::string dealDamage(Character * opponent) override;
};

#endif