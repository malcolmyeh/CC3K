#ifndef ITEM_H
#define ITEM_H

#include "posn.h"

class Items {
    protected:
        char symbol;
    public:
        Posn p;
        Items(Posn p);
        char getSymbol();
};

#endif