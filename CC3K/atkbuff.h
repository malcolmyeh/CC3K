#ifndef ATKBUFF_H
#define ATKBUFF_H

#include "buff.h"

class AtkBuff: public Buff {
    public:
        AtkBuff();
        int getAtk();
        ~AtkBuff();
};

#endif