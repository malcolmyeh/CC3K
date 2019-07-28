#ifndef ITEM_H
#define ITEM_H

#include "posn.h"

class Item {
    protected:
        char symbol;
        Posn p;
    public:
    	char getSymbol();
    	Posn getPosition();
};

#endif