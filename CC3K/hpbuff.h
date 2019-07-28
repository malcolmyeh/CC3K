#ifndef HPBUFF_H
#define HPBUFF_H

#include "buff.h"

class HPBuff: public Buff {
    public:
        HPBuff();
        int getHP();
        ~HPBuff();
};

#endif