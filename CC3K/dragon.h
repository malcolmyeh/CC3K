#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"
#include "gold.h"
#include "barriersuit.h"

class Dragon : public Enemy {
	private:
		bool isHostile;
		dragonHoard *hoard;
		barrierSuit *suit;
	public:
		Dragon(Posn position, dragonHoard *hoard, barrierSuit *suit, int chamberID);
		~Dragon();

		dragonHoard *getHoard();
		barrierSuit *getSuit();

		void setPos(Posn pos);

		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
		std::string dealDamage(Character * opponent) override;
};

#endif