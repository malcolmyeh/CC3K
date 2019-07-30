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
    Posn position;
public:
    
    void updateGold(int amount);
    virtual int getAtk();
    virtual int getDef();
    virtual int getHP();
    virtual int getGold();
    virtual std::string getRace();
    virtual char getSymbol();



    virtual Posn getPosition();
    virtual void move(Posn position);

    virtual void takeDamage(int amount);
    virtual std::string dealDamage(Character *opponent) = 0;
    void getStunned();
    virtual ~Character() {};
};

#endif