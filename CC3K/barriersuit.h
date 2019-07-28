#ifndef BARRIERSUIT_H
#define BARRIERSUIT_H

#include "item.h"

class barrierSuit : public Item {
    public:
        barrierSuit(Posn p, Dragon *dragon);
        Dragon *dragon;
};

#endif