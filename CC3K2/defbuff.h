#ifndef DEFBUFF_H
#define DEFBUFF_H

#include "buff.h"

class DefBuff: public Buff {
    public:
        DefBuff(Player *player, int value);
        int getDef() override;
        ~DefBuff();
};

#endif

