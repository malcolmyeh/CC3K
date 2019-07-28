#ifndef GOLD_H
#define GOLD_H

#include "item.h"

class Gold : public Item {
    private:
        int value;
        std::string type;
        bool guarded;
    public:
        int getValue();
        std::string getType();
        bool isGuarded();
        void setType(std::string type);
        void setGuarded(bool x);
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