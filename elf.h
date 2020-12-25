#ifndef ELF_H
#define ELF_H

#include "player.h"
#include "posn.h"
#include <cmath>

class Elf : public Player
{
public:
    Elf(int HP, int gold, Posn position);
    Elf(int HP, int gold, Posn position, int Atk, int Def, bool hasBarrier);
    ~Elf();
    std::string dealDamage(Character *opponent) override;
};

#endif

