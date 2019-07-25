#ifndef 
#define 
#include "enemy.h"

class Merchant : public Enemy {
	public:
		Merchant(Posn position);
		~Merchant();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif