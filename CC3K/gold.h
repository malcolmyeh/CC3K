#ifndef GOLD_H
#define GOLD_H

#include "item.h"

class Gold : public Item {
    private:
        int value;
        bool guarded;
        std::string type;
    public:
        int getValue();
        bool isGuarded();
        void setGuarded(bool x);
        void setValue(int x);
        std::string getType();
};

class normalHoard: public Gold {
    public:
        normalHoard(Posn p, std::string type);
};

class smallHoard: public Gold {
    public:
        smallHoard(Posn p, std::string type);
};

class dragonHoard: public Gold {
    private:
        Enemy *dragon;
    public:
        dragonHoard(Posn p, std::string type, Enemy *dragon);
        void setDragon(Enemy *dragon);
        Enemy *getDragon();
};

#endif