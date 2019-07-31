#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "enemy.h"

class Vampire : public Enemy
{
public:
    Vampire(Posn position, int chamberID);
    ~Vampire();
    std::string dealDamage(Character *opponent) override;
};

#endif

