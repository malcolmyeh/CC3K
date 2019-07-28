#ifndef DEFBUFF_H
#define DEFBUFF_H

#include "buff.h"

class DefBuff: public Buff {
    public:
        DefBuff();
        int getDef();
        ~DefBuff();
};

#endif