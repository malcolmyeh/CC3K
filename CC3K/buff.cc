#include "buff.h"

// Accessors
Player Buff::getPlayer() {
    return this->player;
}

std::string Buff::getType() {
    return this->type;
}

int Buff::getValue() {
    return this->value;
}