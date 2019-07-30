#ifndef GOLD_H
#define GOLD_H

#include "item.h"
#include "enemy.h"

class Gold : public Item {
    protected:
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
        normalHoard(Posn p);
};

class smallHoard: public Gold {
    public:
        smallHoard(Posn p);
};

class dragonHoard: public Gold {
    private:
        //Enemy *dragon;
    public:
        //dragonHoard(Posn p, Enemy *dragon);
        dragonHoard(Posn p);
        //void setDragon(Enemy *dragon);
        //Enemy *getDragon();
};

#endif