#ifndef 
#define 
#include "enemy.h"

class Troll : public Enemy {
	public:
		Troll(Posn position, bool hasCompass, int chamberID);
		~Troll();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif