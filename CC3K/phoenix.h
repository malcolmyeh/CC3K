#ifndef PHOENIX_H
#define PHOENIX_H
#include "enemy.h"

class Phoenix : public Enemy
{
public:
    Phoenix(Posn position, int chamberID);
    ~Phoenix();
    std::string dealDamage(Character *opponent) override;
};

#endif