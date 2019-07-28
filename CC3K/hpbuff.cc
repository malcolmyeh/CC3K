#include "hpbuff.h"

// Construcor
HPBuff::HPBuff(Player *player, int value) {
    this->player = player;
    this->value = value;
}

// Accessor
int HPBuff::getHP() {
    return this->value + player->getHP();
}

// Destructor
HPBuff::~HPBuff() {
    delete this->player;
}