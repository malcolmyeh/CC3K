#include "dwarf.h"



Dwarf::Dwarf(int HP, int gold, Posn position)
{
    this->Atk = 20;
    this->Def = 30;
    this->HP = HP;
    this->gold = gold;
    this->race = "Dwarf";
    this->symbol = '@';
    this->position = position;
    this->MaxHP = 1000;
    this->hasBarrier = false;
}

Dwarf::Dwarf(int HP, int gold, Posn position, int Atk, int Def, bool hasBarrier)
{
    this->Atk = Atk;
    this->Def = Def;
    this->HP = HP;
    this->gold = gold;
    this->race = "Dwarf";
    this->symbol = '@';
    this->position = position;
    this->MaxHP = 1000;
    this->hasBarrier = hasBarrier;
}

Dwarf::~Dwarf() {}

std::string Dwarf::dealDamage(Character *opponent)
{
    double amount;
    std::string combatMsg;
    std::string defender = opponent->getRace();
    int attack = this->Atk;
    int defense = opponent->getDef();

    int chance = rand() % 40;

    if (chance == 0 || chance == 1)
    {
        //longsword
        this->increaseAtk(1);
        combatMsg += "You forged a Longsword. Atk increased by 1 (Atk: " + std::to_string(this->Atk) + "). ";
    }
    else if (chance == 2)
    {
        //broadsword
        this->increaseAtk(2);
        combatMsg += "You forged a Broadsword. Atk increased by 2 (Atk: " + std::to_string(this->Atk) + "). ";
    }
    else if (chance == 3 || chance == 4)
    {
        //light shield
        this->increaseDef(1);
        combatMsg += "You forged a Light Shield. Def increased by 1 (Def: " + std::to_string(this->Def) + "). ";
    }
    else if (chance == 5)
    {
        //heavy shield
        this->increaseDef(2);
        combatMsg += "You forged a Heavy Shield. Def increased by 2 (Def: " + std::to_string(this->Def) + "). ";
    }

    amount = ceil((100.0 / (100.0 + defense)) * attack);

    opponent->takeDamage((int)amount);

    combatMsg += "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";

    if (opponent->getHP() == 0)
    {
        combatMsg += defender + " has been slain. You have earned " + std::to_string(opponent->getGold()) + " gold. ";
        this->updateGold(opponent->getGold());
    }


    return combatMsg;
}


