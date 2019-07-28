#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "enemy.h"

class Vampire : public Enemy {
	public:
		Vampire(Posn position, int chamberID);
		~Vampire();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
		std::string dealDamage(Character * opponent) override;
};

#endif