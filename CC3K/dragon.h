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
		Dragon(Posn position, DragonHoard * dragonHoard, BarrierSuit * barrierSuit, int chamberID);
		~Dragon();
		void setPos(Posn pos);
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
		std::string dealDamage(Character * opponent) override;
};

#endif