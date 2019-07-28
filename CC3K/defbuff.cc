#include "defbuff.h"

// Constructor
DefBuff::DefBuff(Player *player, int value) {
    this->player = player;
    this->value = value;
} 

// Accessor
int DefBuff::getDef() {
    return this->value + player->getDef();
}

// Destructor
DefBuff::~DefBuff() {
    delete this->player;
}