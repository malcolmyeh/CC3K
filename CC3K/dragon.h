#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"
#include "dragonhoard.h"
#include "barriersuit.h"

class Dragon : public Character {
	private:
		bool isHostile;
		DragonHoard * dragonHoard;
		BarrierSuit * barrierSuit;
	public:
		Dragon(Posn position, DragonHoard * dragonHoard, BarrierSuit * barrierSuit, bool hasCompass, int chamberID);
		~Dragon();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif