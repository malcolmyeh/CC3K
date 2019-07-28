#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"
#include "gold.h"
#include "barriersuit.h"

class Dragon : public Enemy
{
private:
    bool isHostile;
    Item *hoard;
    Item *suit;
public:
    Dragon(Posn position, Item *hoard, Item *suit, int chamberID);
    ~Dragon();
    Item *getHoard();
    Item *getSuit();
    void setPos(Posn pos);
    std::string dealDamage(Character *opponent) override;
};

#endif