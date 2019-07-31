#include "atkbuff.h"

// Constructor
AtkBuff::AtkBuff(Player *player, int value)
{
    this->player = player;
    this->value = value;
}

// Accessor
int AtkBuff::getAtk()
{
    return this->value + this->player->getAtk();
}

// Destructor
AtkBuff::~AtkBuff()
{
    delete this->player;
}

