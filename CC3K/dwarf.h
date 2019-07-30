#ifndef DWARF_H
#define DWARF_H

#include "player.h"
#include "posn.h"
#include <cmath>

class Dwarf : public Player
{
public:
    Dwarf(int HP, int gold, Posn position);
    Dwarf(int HP, int gold, Posn position, int Atk, int Def, bool hasBarrier);
    ~Dwarf();
    std::string dealDamage(Character *opponent) override;
};

#endif