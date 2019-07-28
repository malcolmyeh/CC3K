#ifndef TROLL_H
#define TROLL_H
#include "enemy.h"

class Troll : public Enemy {
	public:
		Troll(Posn position, int chamberID);
		~Troll();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
		std::string dealDamage(Character * opponent) override;
};

#endif