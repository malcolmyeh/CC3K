#ifndef 
#define 
#include "enemy.h"

class Phoenix : public Enemy {
	public:
		Phoenix(Posn position, bool hasCompass, int chamberID);
		~Phoenix();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif