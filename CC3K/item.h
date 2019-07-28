#ifndef ITEM_H
#define ITEM_H

#include "posn.h"

class Item {
    protected:
        char symbol;
    public:
        Posn p;
        Item(Posn p);
};

#endif