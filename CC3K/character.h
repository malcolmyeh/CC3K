#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "posn.h"
#include <cmath>


class Character
{
protected:
    int Atk;
    int Def;
    int HP;
    int gold;
    std::string race;
    char symbol;
    bool stunned;
public:
    void getStunned();
    Posn position;
    void updateGold(int amount);
    virtual int getAtk();
    virtual int getDef();
    virtual int getHP();
    virtual int getGold();
    Posn getPosition();
    std::string getRace();
    char getSymbol();
    void move(Posn position);
    virtual void takeDamage(int amount);
    virtual std::string dealDamage(Character *opponent) = 0;
};


#endif