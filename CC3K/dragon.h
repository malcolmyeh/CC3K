#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"


class Dragon : public Enemy
{
private:
    bool isHostile;
    Gold *hoard;
    barrierSuit *suit;
public:
    Dragon(Posn position, Gold *hoard, barrierSuit *suit, int chamberID);
    ~Dragon();
    Gold *getHoard() override;
    barrierSuit *getSuit() override;
    void setPos(Posn pos);
    std::string dealDamage(Character *opponent) override;
    //void move(Posn position) override;
};

#endif