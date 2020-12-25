#ifndef TROLL_H
#define TROLL_H
#include "enemy.h"

class Troll : public Enemy
{
public:
    Troll(Posn position, int chamberID);
    ~Troll();
    std::string dealDamage(Character *opponent) override;
};

#endif

