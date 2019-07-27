#ifndef 
#define 
#include "enemy.h"

class Goblin : public Enemy {
	public:
		Goblin(Posn position, bool hasCompass, int chamberID);
		~Goblin();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif