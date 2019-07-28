#ifndef GOBLIN_H
#define GOBLIN_H
#include "enemy.h"

class Goblin : public Enemy
{
public:
    Goblin(Posn position, int chamberID);
    ~Goblin();
    std::string dealDamage(Character *opponent) override;
};

#endif