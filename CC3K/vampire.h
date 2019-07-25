#ifndef 
#define 
#include "enemy.h"

class Vampire : public Enemy {
	public:
		Vampire(Posn position);
		~Vampire();
		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
};

#endif