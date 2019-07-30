#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"


class Dragon : public Enemy
{
private:
    bool isHostile;
    dragonHoard *hoard;
    barrierSuit *suit;
public:
    Dragon(Posn position, dragonHoard *hoard, barrierSuit *suit, int chamberID);
    ~Dragon();
    dragonHoard *getHoard() override;
    barrierSuit *getSuit() override;
    void setPos(Posn pos);
    std::string dealDamage(Character *opponent) override;
};

#endif