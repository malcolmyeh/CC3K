#ifndef POTION_H
#define POTION_H

#include <string>

class Potion {
    private:
        string type;
    public:
        Potion(Posn p);
        string getPotion();
};

#endif