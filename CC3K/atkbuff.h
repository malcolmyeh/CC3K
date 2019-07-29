#ifndef ATKBUFF_H
#define ATKBUFF_H

#include "buff.h"

class AtkBuff: public Buff {
    public:
        AtkBuff(Player *player, int value);
        int getAtk() override;
        ~AtkBuff();
        
};

#endif