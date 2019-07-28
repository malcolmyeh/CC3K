#ifndef BARRIERSUIT_H
#define BARRIERSUIT_H

#include "item.h"

class barrierSuit : public Item {
	private:
		bool guarded;
		Enemy *dragon;
    public:
        barrierSuit(Posn p, Enemy *dragon);
        bool guarded();
        void setGuarded(bool b);
        void setDragon(Enemy *dragon);
        Enemy *getDragon();
};

#endif