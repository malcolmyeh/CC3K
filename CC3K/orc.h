#ifndef ORC_H
#define ORC_H

#include "player.h"
#include "posn.h"
#include <cmath>

class Orc : public Player {
	public:
		Orc(int HP, int gold, Posn position);
		~Orc();
		//void takeDamage(int amount) override;
};

#endif