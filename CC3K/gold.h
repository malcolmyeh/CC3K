#ifndef GOLD_H
#define GOLD_H

#include "items.h"

class Gold {
    private:
        int value;
        string type;
        bool protected;
    public:
        int getValue();
        string getType();
        bool isProtected();
        void setType(string type);
        void setProtection(bool x);
        void setValue(int x);
};

class normalHoard: public Gold {
    public:
        normalHoard(Posn p);
};

class smallHoard: public Gold {
    public:
        smallHoard(Posn p);
};

class dragonHoard: public Gold {
    public:
        Dragon *dragon;
        dragonHoard(Posn p, Dragon *dragon);
};

#endif