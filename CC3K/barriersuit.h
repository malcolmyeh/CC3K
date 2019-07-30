#ifndef BARRIERSUIT_H
#define BARRIERSUIT_H

#include "item.h"
#include "enemy.h"

class barrierSuit : public Item {
	private:
		bool guarded;

  public:
        barrierSuit(Posn p);
        bool isGuarded();
        void setGuarded(bool b);
};

#endif