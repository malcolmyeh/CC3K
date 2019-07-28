#ifndef GOLD_H
#define GOLD_H

#include "item.h"

<<<<<<< HEAD
class Gold: public Items {
=======
class Gold : public Item {
>>>>>>> 2a1a16f7031737762740e6e37f2a9650d5691ddb
    private:
        int value;
        std::string type;
        bool protected;
    public:
        int getValue();
        std::string getType();
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