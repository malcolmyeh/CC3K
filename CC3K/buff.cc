#include "buff.h"

// Accessors
Player * Buff::getPlayer() {
    return this->player;
}


int Buff::getValue() {
    return this->value;
}

int Buff::getGold() {
	return this->player->getGold();
}

int Buff::getHP() {
	return this->player->getHP();
}

int Buff::getAtk(){
	return this->player->getAtk();
}

int Buff::getDef(){
	return this->player->getDef();
}

std::string Buff::getRace(){
	return this->player->getRace();
}

char Buff::getSymbol(){
	return this->player->getSymbol();
}

void Buff::takeDamage(int amount){
	this->player->takeDamage(amount);
}

std::string Buff::dealDamage(Character *opponent)
{
    double amount;
    double lifesteal;
    std::string combatMsg;
    std::string defender = opponent->getRace();
    int attack = this->getAtk();
    int defense = opponent->getDef();

    amount = ceil((100.0 / (100.0 + defense)) * attack);

    if (this->getRace() == "Elf")
    {
        if (this->getHP() < 35)
        {
            if (rand() % 2 == 0)
            {
                this->getPlayer()->heal(15);
                combatMsg += "Elven magic restored 15 HP (HP: " + std::to_string(this->getHP()) + "). ";
            }
        }
        amount = ceil((100.0 / (100.0 + defense)) * attack);

        if (rand() % 10 == 0)
        {
            opponent->getStunned();
            opponent->takeDamage((int)amount);
            combatMsg += "You cast Shockwave dealing " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + ") and stunning them. ";
        }
        else
        {
            opponent->takeDamage((int)amount);
            combatMsg += "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
        }
    }
    else if (this->getRace() == "Orc")
    {
        int chance = rand() % 8;
        if (chance == 0)
        {
            //BESERK
            amount *= 1.5;
            lifesteal = amount * 0.25;
            this->getPlayer()->heal((int)lifesteal);
            opponent->takeDamage((int)amount);
            combatMsg = "BESERK! You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). You lifesteal for " + std::to_string((int)lifesteal) + " HP (HP: " + std::to_string(this->getHP()) + "). ";
        }
        else if (chance == 1 || chance == 2)
        {
            //lifesteal
            lifesteal = amount * 0.25;
            this->getPlayer()->heal((int)lifesteal);
            opponent->takeDamage((int)amount);
            combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). You lifesteal for " + std::to_string((int)lifesteal) + " HP (HP: " + std::to_string(this->getHP()) + "). ";
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
    }
    else if (this->getRace() == "Dwarf")
    {
        int chance = rand() % 40;

        if (chance == 0 || chance == 1)
        {
            //longsword
            this->getPlayer()->increaseAtk(1);
            combatMsg += "You forged a Longsword. Atk increased by 1 (Atk: " + std::to_string(this->getAtk()) + "). ";
        }
        else if (chance == 2)
        {
            //broadsword
            this->getPlayer()->increaseAtk(2);
            combatMsg += "You forged a Broadsword. Atk increased by 2 (Atk: " + std::to_string(this->getAtk()) + "). ";
        }
        else if (chance == 3 || chance == 4)
        {
            //light shield
            this->getPlayer()->increaseDef(1);
            combatMsg += "You forged a Light Shield. Def increased by 1 (Def: " + std::to_string(this->getDef()) + "). ";
        }
        else if (chance == 5)
        {
            //heavy shield
            this->getPlayer()->increaseDef(2);
            combatMsg += "You forged a Heavy Shield. Def increased by 2 (Def: " + std::to_string(this->getDef()) + "). ";
        }
        amount = ceil((100.0 / (100.0 + defense)) * attack);
        opponent->takeDamage((int)amount);
        combatMsg += "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
    }
    else
    {
        opponent->takeDamage((int)amount);
        combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
    }
    if (opponent->getHP() == 0)
    {
        combatMsg += defender + " has been slain. You have earned " + std::to_string(opponent->getGold()) + " gold.";
        this->getPlayer()->updateGold(opponent->getGold());
    }
    return combatMsg;
}


/* Posn Buff::getPosition(){
    return this->getPlayer()->getPosition();
}*/

/* void Buff::move(Posn p){
    this->getPlayer()->move(p);
}*/