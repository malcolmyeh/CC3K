#ifndef BARRIERSUIT_H
#define BARRIERSUIT_H

#include "item.h"
#include "enemy.h"

class barrierSuit : public Item {
	private:
		bool guarded;
		Enemy *dragon;
    public:
        barrierSuit(Posn p, Enemy *dragon);
        bool isGuarded();
        void setGuarded(bool b);
        void setDragon(Enemy *dragon);
        Enemy *getDragon();
};

#endif