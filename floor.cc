#include "floor.h"
#include <iostream>

Floor::Floor(int level, bool hostile, bool spawned) {
	this->level = level;
	this->merchantHostile = hostile;
	this->barrierSpawned = spawned;
	this->player = NULL;
	this->stair = NULL;
	this->suit = NULL;
	for (int i = 0; i < 6; ++i){
		this->knownPotion[i] = false;
	}
}

Floor::~Floor() {
	for (int i = 0; i < enemies.size(); ++i) {
		//delete enemies.at(i);
		Enemy * temp = enemies.at(i);
		enemies.erase(enemies.begin() + i);
		delete temp;
		--i;
	}
	for (int i = 0; i < golds.size(); ++i) { 
		//delete golds.at(i); 
		Gold * temp = golds.at(i);
		golds.erase(golds.begin() + i);
		delete temp;
		--i;
	}
	for (int i = 0; i < potions.size(); ++i) {
		//delete potions.at(i);
		Potion * temp = potions.at(i);
		potions.erase(potions.begin() + i);
		delete temp;
		--i;
	}
	for (int i = 0; i < chambers.size(); ++i) {
		//delete chambers.at(i);
		Chamber * temp = chambers.at(i);
		chambers.erase(chambers.begin() + i);
		delete temp;
		--i;
	}
	delete this->player;
	delete this->stair;
	delete this->suit;
}

void Floor::generatePosition(int &id, Posn &pos) {
	id = rand() % 5 + 1;

	Chamber *c = chambers.at(id - 1);
	Posn p;
	do {
		p = c->getPosition();
	} while (!this->validTile(p));
	pos = p;
}

Posn Floor::dragonPosition(Posn pos) {
	Posn p;
	do {
		int i = rand() % 8;
		std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "sw", "se"};
		p = pos.getNew(dir[i]);
	} while (!this->validTile(p));
	return p;
}

void Floor::initFloor(char type) {
	int id;
	int dragons = 0;
	srand(time(NULL));
	generateChamber();
	generatePlayer(type, id);
	generateStair(id);
	generateItems(dragons);
	generateEnemies(dragons);
	assignCompass();
}

void Floor::initNext(char type, int HP, int gold, int Atk, int Def, bool hasBarrier) {
	int id;
	int dragons = 0;
	srand(time(NULL));
	generateChamber();

	id = rand() % 5 + 1;
	Chamber *c = chambers.at(id - 1);
	Posn p;
	do {
		p = c->getPosition();
	} while (!(this->displayGrid[p.y][p.x] == '.'));
	if (type == 'h') {
	 	this->player = new Human(HP, gold, p, Atk, Def, hasBarrier);
	} else if (type == 'o') {
		this->player = new Orc(HP, gold, p, Atk, Def, hasBarrier);
	} else if (type == 'e') {
		this->player = new Elf(HP, gold, p, Atk, Def, hasBarrier);
	} else if (type == 'd') {
		this->player = new Dwarf(HP, gold, p, Atk, Def, hasBarrier);
	}
	displayGrid[p.y][p.x] = '@';

	generateStair(id);
	generateItems(dragons);
	generateEnemies(dragons);
	assignCompass();
}

void Floor::generateChamber() {
	for(int i = 1; i < 6; i++) {
		Chamber *c = new Chamber(i);
		this->chambers.push_back(c);
	}
}

void Floor::generatePlayer(char type, int &id) {


	id = rand() % 5 + 1;

	Chamber *c = chambers.at(id - 1);
	Posn p;
	do {
		p = c->getPosition();
	} while (!(this->displayGrid[p.y][p.x] == '.'));


	if (type == 'h') {
	 	this->player = new Human(140, 0, p);
	} else if (type == 'o') {
		this->player = new Orc(1800, 0, p);
	} else if (type == 'e') {
		this->player = new Elf(1400, 0, p);
	} else if (type == 'd') {
		this->player = new Dwarf(1000, 0, p);
	}
	displayGrid[p.y][p.x] = '@';
}

void Floor::generateStair(int id) {
	int id2;
	Posn p;
	do {
		id2 = rand() % 5 + 1;
	} while (id == id2);
	Chamber *c = chambers.at(id2 - 1);
	do {
		p = c->getPosition();
	} while (!(this->displayGrid[p.y][p.x] == '.'));
	 
	this->stair = new Stair(p);
	//this->displayGrid[p.y][p.x] == '/';
}

void Floor::generateEnemies(int dragons) {
	for (int i = 0; i < 20 - dragons; i++) {
		int num = rand() % 18 + 1;
		int id;
		Posn pos;
		generatePosition(id, pos);
		Enemy *e;
		if (num <= 4) {
			e = new Werewolf(pos, id);
			this->enemies.push_back(e);
		} else if (num > 4 && num <= 7) {
			e = new Vampire(pos, id);
			this->enemies.push_back(e);
		} else if (num > 7 && num <= 12) {
			e = new Goblin(pos, id);
			this->enemies.push_back(e);
		} else if (num > 12 && num <= 14) {
			e = new Troll(pos, id);
			this->enemies.push_back(e);
		} else if (num > 14 && num <= 16) {
			e = new Phoenix(pos, id);
			this->enemies.push_back(e);
		} else if (num > 16 && num <= 18) {
			e = new Merchant(pos, id);
			this->enemies.push_back(e);
		}
		displayGrid[pos.y][pos.x] = e->getSymbol();
	}
}

void Floor::generateItems(int &dragons) {
	for (int j = 0; j < 10; j++) {

		int num = rand() % 6 + 1;
		int id;
		Posn pos;
		generatePosition(id, pos);

		Potion *i;
		if (num == 1) {
			i = new Potion(pos, "RH");
			this->potions.push_back(i);
		} else if (num == 2) {
			i = new Potion(pos, "BA");
			this->potions.push_back(i);
		} else if (num == 3) {
			i = new Potion(pos, "BD");
			this->potions.push_back(i);
		} else if (num == 4) {
			i = new Potion(pos, "PH");
			this->potions.push_back(i);
		} else if (num == 5) {
			i = new Potion(pos, "WA");
			this->potions.push_back(i);
		} else if (num == 6) {
			i = new Potion(pos, "WD");
			this->potions.push_back(i);		}

		displayGrid[pos.y][pos.x] = i->getSymbol();
	}
	for (int j = 0; j < 6; j++) {

		int num = rand() % 8 + 1;
		int id;
		Posn pos;
		generatePosition(id, pos);
		Gold *i;
		if (num <= 5) {
			i = new normalHoard(pos);
			this->golds.push_back(i);
		} else if (num <= 7) {
			i = new smallHoard(pos);
			this->golds.push_back(i);
		} else if (num == 8) {
			i = new dragonHoard(pos);
			this->golds.push_back(i);
			Posn dpos = dragonPosition(pos);
			Enemy *e = new Dragon(dpos, i, NULL, id);
			this->enemies.push_back(e);
			
			++dragons;
			displayGrid[dpos.y][dpos.x] = e->getSymbol();
		}
		displayGrid[pos.y][pos.x] = i->getSymbol();
	}
	int num = rand() % (6 - this->level);
	if (num == 0 && !this->barrierSpawned) {

		int id;
		Posn pos;
		generatePosition(id, pos);
		this->suit = new barrierSuit(pos);
		this->barrierSpawned = true;
		displayGrid[pos.y][pos.x] = this->suit->getSymbol();
		Posn dpos = dragonPosition(pos);
		Enemy *e = new Dragon(dpos, NULL, this->suit, id);
		this->enemies.push_back(e);
		++dragons;
		displayGrid[dpos.y][dpos.x] = e->getSymbol();
	}
}

void Floor::assignCompass() {
	int num = rand() % this->enemies.size();
	this->enemies.at(num)->setCompass(true);
}

std::string Floor::actEnemy() {
	std::string combatLog;
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "sw", "se"};
	for (int i = 0; i < enemies.size(); ++i) {
		Enemy *e = enemies.at(i);
		if ((e->withinRange(this->player->getPosition()) && e->getRace() != "Merchant") ||
		(e->getRace() == "Merchant" && this->getHostile() && e->withinRange(this->player->getPosition()))) {
			combatLog += e->dealDamage(this->player);
		} else if (e->getRace() != "Dragon"){
			Posn p;
			do {
				int num = rand() % 8;
				p = e->getPosition().getNew(dir[num]);
			} while(!validTile(p));
			displayGrid[e->getPosition().y][e->getPosition().x] = '.';
			e->move(p);
			displayGrid[e->getPosition().y][e->getPosition().x] = e->getSymbol();
		}
	}
	return combatLog; 
}

std::string Floor::movePlayer(std::string direction) {
	
	Posn p = this->player->getPosition().getNew(direction);
	std::string dir[8] = {"ea", "we", "no", "so", "ne", "nw", "sw", "se"};
	std::string dir2[8] = {"East", "West", "North", "South", "Northeast", "Northwest", "Southwest", "Southeast"};
	std::string log;
	if (validMove(p)){
		std::string gold;
		bool g;
		if (displayGrid[p.y][p.x] == 'G') {
			gold = pickGold(p);
			if (gold == "invalid") {
				return gold;
			}
			g = true;
		}
		std::string barrier;
		bool b;
		if (displayGrid[p.y][p.x] == 'B') {
			if (this->suit->isGuarded()) {
				return "invalid";
			}
			b = true;
			this->setSpawned(true);
			this->player->setBarrier(true);
			barrier = "You have acquired a Barrier Suit. ";
		}
		
		if (p == this->stair->getPosition()){
			return "newfloor";
		}
		log += "You move ";
		for (int i = 0; i < 8; i++) {
			if (dir[i] == direction) {
				log += dir2[i] + ". ";
				break;
			}
		}
		if (g) {
			log += gold;
		}
		if (b){
			log += barrier;
		}
		std::string potion;
		potion = seePotion(p);
		if (potion != "invalid") {
			log += potion;
		}
		displayGrid[this->player->getPosition().y][this->player->getPosition().x] = defaultGrid[this->player->getPosition().y][this->player->getPosition().x];
		displayGrid[p.y][p.x] = this->player->getSymbol();
		this->player->move(p);
		return log;
	}
	return "invalid";
}

std::string Floor::pickGold(Posn p) {
	for (int i = 0; i < golds.size(); i++) {
		if (golds.at(i)->getPosition() == p) {
			Gold *tmp = golds.at(i);
			if (!(tmp->isGuarded())) {
				int value = tmp->getValue();
				golds.erase(golds.begin()+i);
				delete tmp;
				this->player->updateGold(value);
				return "You picked " + std::to_string(value) + " gold. ";
			}
		}
	}
	return "invalid";
}

std::string Floor::seePotion(Posn p){
	for (int i = 0; i < potions.size(); ++i){
		if (potions.at(i)->getSymbol() == 'P' && potions.at(i)->withinRange(p)) {
			if(potions.at(i)->getType() == "RH"){
				if (knownPotion[0]){
					return "You see a Restore Health potion. ";
				}
			} else if (potions.at(i)->getType() == "BA"){
				if (knownPotion[1]){
					return "You see a Boost potion. ";
				}
			} else if (potions.at(i)->getType() == "BD"){
				if (knownPotion[2]){
					return "You see a Boost Defense potion. ";
				}				
			} else if (potions.at(i)->getType() == "PH"){
				if (knownPotion[3]){
					return "You see a Poison Health potion. ";
				}				
			} else if (potions.at(i)->getType() == "WA"){
				if (knownPotion[4]){
					return "You see a Wound Attack potion. ";
				}				
			} else if (potions.at(i)->getType() == "WD"){
				if (knownPotion[5]){
					return "You see a Wound Defense potion. ";
				}			
			}
			return "You see an unknown potion. ";			
		}
	}
	return "invalid";
}

std::string Floor::talkMerchant(std::string direction){
	if (this->getHostile()){
		return "You are my enemy!";
	}
	Posn p = this->player->getPosition().getNew(direction);
	for (int i = 0; i < this->enemies.size(); ++i){
		if (p == this->enemies.at(i)->getPosition()){
			if (this->enemies.at(i)->getRace() == "Merchant") {
				return "(B)uckler Shield: 3g (T)arge Shield: 6g (P)avise Shield: 12g (N)odachi: 3g (K)atana: 7g (U)chigatana: 15g";
			}
		}
	}
	return "Invalid input. Try again.";
}
std::string Floor::buyMerchant(std::string option){
	if (option == "b"){
		if (this->player->getGold() >= 3){
			this->player->updateGold(-3);
			this->player->increaseDef(2);
			return "You purchased a Buckler Shield (Def: " + std::to_string(this->player->getDef()) + "). ";
		} else {
			return "You are too poor. ";
		}
	} else if (option == "t"){
		if (this->player->getGold() >= 6){
			this->player->updateGold(-6);
			this->player->increaseDef(5);
			return "You purchased a Targe Shield (Def: " + std::to_string(this->player->getDef()) + "). ";
		} else {
			return "You are too poor. ";
		}
	} else if (option == "p"){
		if (this->player->getGold() >= 12){
			this->player->updateGold(-12);
			this->player->increaseDef(8);
			return "You purchased a Pavise Shield (Def: " + std::to_string(this->player->getDef()) + "). ";
		} else {
			return "You are too poor. ";
		}
	} else if (option == "n"){
		if (this->player->getGold() >= 3){
			this->player->updateGold(-3);
			this->player->increaseAtk(2);
			return "You purchased a Nodachi (Atk: " + std::to_string(this->player->getAtk()) + "). ";
		} else {
			return "You are too poor. ";
		}
	} else if (option == "k"){
		if (this->player->getGold() >= 7){
			this->player->updateGold(-7);
			this->player->increaseAtk(5);
			return "You purchased a Katana (Atk: " + std::to_string(this->player->getAtk()) + "). ";
		} else {
			return "You are too poor. ";
		}
	} else if (option == "u"){
		if (this->player->getGold() >= 15){
			this->player->updateGold(-15);
			this->player->increaseAtk(8);
			return "You purchased an Uchigatana (Atk: " + std::to_string(this->player->getAtk()) + "). ";
		} else {
			return "You are too poor. ";
		}
	}
	return "Sorry I don't have that item. ";
}

std::string Floor::usePotion(std::string direction){
	Posn p = this->player->getPosition().getNew(direction);
	std::string log;
	for (int i = 0; i < this->potions.size(); ++i){
		if (p == this->potions.at(i)->getPosition()){
			if(this->potions.at(i)->getType() == "RH"){
				this->player->heal(10);
				this->knownPotion[0] = true;
				log = "Restore Health potion restores 10 HP (HP: " + std::to_string(this->player->getHP()) + "). ";
			} else if (this->potions.at(i)->getType() == "BA"){
				this->player = new AtkBuff(this->player, 5);
				this->knownPotion[1] = true;
				log =  "Boost Attack potion grants 5 damage (Atk: " + std::to_string(this->player->getAtk()) + "). ";				
			} else if (this->potions.at(i)->getType() == "BD"){
				this->player = new DefBuff(this->player, 5);
				this->knownPotion[2] = true;
				log =  "Boost Defense potion grants 5 defense (Def: " + std::to_string(this->player->getDef()) + "). ";				
			} else if (this->potions.at(i)->getType() == "PH"){
				this->knownPotion[3] = true;
				if (this->player->getRace() == "Elf"){
					this->player->heal(10);
					log =  "Poison Health potion restores 10 HP (HP: " + std::to_string(this->player->getHP()) + "). ";
				} else {
					this->player->heal(-10);
					log =  "Poison Health potion deals 10 damage (HP: " + std::to_string(this->player->getHP()) + "). ";
				}		
			} else if (this->potions.at(i)->getType() == "WA"){
				this->knownPotion[4] = true;
				if (this->player->getRace() == "Elf"){
					this->player = new AtkBuff(this->player, 5);
					log =  "Wound Attack potion grants 5 damage (Atk: " + std::to_string(this->player->getAtk()) + "). ";
				} else {
					this->player = new AtkBuff(this->player, -5);
					log =  "Wound Attack potion reduces 5 damage (Atk: " + std::to_string(this->player->getAtk()) + "). ";				
				}								
			} else if (this->potions.at(i)->getType() == "WD"){
				this->knownPotion[5] = true;
				if (this->player->getRace() == "Elf"){
					this->player = new DefBuff(this->player, 5);
					log =  "Wound Defense potion grants 5 defense (Def: " + std::to_string(this->player->getDef()) + "). ";
				} else {
					this->player = new DefBuff(this->player, -5);
					log =  "Wound Defense potion reduces 5 defense (Def: " + std::to_string(this->player->getDef()) + "). ";
				}							
			}
			displayGrid[p.y][p.x] = defaultGrid[p.y][p.x];
			Potion * temp = this->potions.at(i);
			this->potions.erase(this->potions.begin() + i);
			delete temp;
			return log;
		}
		
	}
	return "No potion in direction. ";
}

std::string Floor::atkPlayer(std::string direction){
	Posn p = this->player->getPosition().getNew(direction);
	std::string combatLog;
	for (int i = 0; i < this->enemies.size(); ++i){
		if (p == this->enemies.at(i)->getPosition()){
			if (this->enemies.at(i)->getRace() == "Merchant") {
				if (!this->getHostile()) { this->setHostile(true); }
			}
			combatLog += this->player->dealDamage(this->enemies.at(i));
			if (this->enemies.at(i)->getHP() == 0){
				if(this->enemies.at(i)->getRace() == "Dragon") {
					if (this->enemies.at(i)->getHoard() != NULL) {
						this->enemies.at(i)->getHoard()->setGuarded(false);
					} else if (this->enemies.at(i)->getSuit() != NULL) {
						this->enemies.at(i)->getSuit()->setGuarded(false);
					}
				}
				Enemy * temp = this->enemies.at(i);
				this->enemies.erase(this->enemies.begin()+i);
				displayGrid[temp->getPosition().y][temp->getPosition().x] = '.';
				if (temp->compass()) {
					combatLog += "You found the compass. The stairs are now visible. ";
					displayGrid[this->stair->getPosition().y][this->stair->getPosition().x] = '/';
				}
				delete temp;
			}
			return combatLog;
		}
	}
	return "Invalid attack. ";
}

bool Floor::validMove(Posn pos) {
	char t = this->displayGrid[pos.y][pos.x];
	return t == '.' || t == '+' || t == '#' || t == '/' || t == 'G' || t == 'B';
}

bool Floor::validTile(Posn pos) {
	return this->displayGrid[pos.y][pos.x] == '.' && pos != this->stair->getPosition();
}

void Floor::setLevel(int level) {
	this->level = level;
}

void Floor::setHostile(bool hostile) {
	this->merchantHostile = hostile;
}

void Floor::setSpawned(bool spawned) {
	this->barrierSpawned = spawned;
}

int Floor::getLevel() {
	return this->level;
}

bool Floor::getHostile() {
	return this->merchantHostile;
}

bool Floor::getSpawned() {
	return this->barrierSpawned;
}

