#ifndef ORC_H
#define ORCH_H

#include "player.h"
#include "posn.h"
#include <cmath>

class Orc : public Player {
	public:
		Orc(int HP, int gold, Posn position);
		~Orc();
};

#endif