#ifndef POTION_H
#define POTION_H

#include "items.h"
#include <string>

class Potion: public Items {
    private:
        std::string type;
    public:
        Potion(Posn p);
        std::string getPotion();
};

#endif