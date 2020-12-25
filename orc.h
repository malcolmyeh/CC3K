#ifndef ORC_H
#define ORC_H

#include "player.h"
#include "posn.h"
#include <cmath>

class Orc : public Player
{
public:
    Orc(int HP, int gold, Posn position);
    Orc(int HP, int gold, Posn position, int Atk, int Def, bool hasBarrier);
    ~Orc();
    std::string dealDamage(Character *opponent) override;
};

#endif

