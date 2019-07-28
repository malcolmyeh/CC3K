#ifndef BUFF_H
#define BUFF_H

#include "player.h"

class Buff {
    protected:
        Player *player;
        int value;
    public:
        Player *getPlayer();
        std::string getType();
        int getValue();
};