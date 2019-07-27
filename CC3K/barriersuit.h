#ifndef BARRIERSUIT_H
#define BARRIERSUIT_H

#include "items.h"

class barrierSuit {
    public:
        barrierSuit(Posn p, Dragon *dragon);
        Dragon *dragon;
};

#endif