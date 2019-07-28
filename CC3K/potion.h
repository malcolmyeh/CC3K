#ifndef POTION_H
#define POTION_H

#include "item.h"
#include <string>

<<<<<<< HEAD
class Potion : public Item {
=======
class Potion: public Item {
>>>>>>> 334f0e573ad677f7129cefc45555b44493c33249
    private:
        std::string type;
    public:
        Potion(Posn p, std::string type);
        std::string getPotion();
};

#endif