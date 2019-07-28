#ifndef DWARF_H
#define DWARF_H

#include "player.h"
#include "posn.h"
#include <cmath>

class Dwarf : public Player
{
public:
    Dwarf(int HP, int gold, Posn position);
    ~Dwarf();
    std::string dealDamage(Character *opponent) override;
};

#endif