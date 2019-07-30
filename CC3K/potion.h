#ifndef POTION_H
#define POTION_H

#include "item.h"
#include <string>

class Potion: public Item {
    private:
        std::string type;
    public:
        Potion(Posn p, std::string type);
        std::string getType();
};

#endif