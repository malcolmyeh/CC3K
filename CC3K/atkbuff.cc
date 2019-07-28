#include "atkbuff.h"

// Constructor
AtkBuff::AtkBuff(Player *player) {
    this->player = player;
    this->value = value;
}

// Accessor
int AtkBuff::getAtk() {
    return this->value + player->getAtk();
}

// Destructor
AtkBuff::~AtkBuff() {
    delete this->player;
}