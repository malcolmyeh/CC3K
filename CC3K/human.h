#ifndef HUMAN_H
#define HUMAN_H

#include "player.h"
#include "posn.h"
#include <cmath>

class Human : public Player
{
public:
    Human(int HP, int gold, Posn position);
    ~Human();
};

#endif