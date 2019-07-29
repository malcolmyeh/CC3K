#include "orc.h"

Orc::Orc(int HP, int gold, Posn position)
{
    this->Atk = 30;
    this->Def = 25;
    this->HP = HP;
    this->gold = gold;
    this->race = "Orc";
    this->symbol = '@';
    this->position = position;
    this->MaxHP = 180;
    this->hasBarrier = false;
}

Orc::~Orc() {}

std::string Orc::dealDamage(Character *opponent)
{
    double amount;
    double lifesteal;
    std::string combatMsg;
    std::string defender = opponent->getRace();
    int attack = this->Atk;
    int defense = opponent->getDef();

    amount = ceil((100.0 / (100.0 + defense)) * attack);

    int chance = rand() % 8;
    if (chance == 0)
    {
        //BESERK
        amount *= 1.5;
        lifesteal = amount * 0.25;
        this->heal((int)lifesteal);
        opponent->takeDamage((int)amount);
        combatMsg = "BESERK! You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). You lifesteal for " + std::to_string((int)lifesteal) + " HP (HP: " + std::to_string(this->HP) + "). ";

    }
    else if (chance == 1 || chance == 2)
    {
        //lifesteal
        lifesteal = amount * 0.25;
        this->heal((int)lifesteal);
        opponent->takeDamage((int)amount);
        combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). You lifesteal for " + std::to_string((int)lifesteal) + " HP (HP: " + std::to_string(this->HP) + "). ";
    }
    else if (chance == 3 || chance == 4)
    {
        //critical hit
        amount *= 1.5;
        opponent->takeDamage((int)amount);
        combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
    }
    else
    {
        opponent->takeDamage((int)amount);
        combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
    }

    if (opponent->getHP() == 0)
    {
        combatMsg += defender + " has been slain. You have earned " + std::to_string(opponent->getGold()) + " gold.";
        this->updateGold(opponent->getGold());
    }
    return combatMsg;
}



