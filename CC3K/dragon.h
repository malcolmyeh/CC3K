#ifndef DRAGON_H
#define DRAGON_H
#include "character.h"
#include "dragonhoard.h"
#include "barriersuit.h"

class Dragon : public Character {
	private:
		bool isHostile;
		DragonHoard * dragonHoard;
		BarrierSuit * barrierSuit;
	public:
		void dealDamage(Character * opponent);
		void takeDamage(amount Integer);
}

#endif