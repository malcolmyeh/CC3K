#ifndef 
#define 
#include "enemy.h"

class Merchant : public Enemy {
	public:
		Merchant(Posn position, bool hasCompass, int chamberID);
		~Merchant();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif