#ifndef WEREWOLF_H
#define WEREWOLF_H
#include "enemy.h"

class Werewolf : public Enemy
{
public:
    Werewolf(Posn position, int chamberID);
    ~Werewolf();
    std::string dealDamage(Character *opponent) override;
};

#endif

