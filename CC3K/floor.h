#ifndef FLOOR_H
#define FLOOR_H

class Floor {

	int level;
	bool won;
	bool stairVisible;
	bool merchantHostile;
	bool barrierSpawned;
	Player * player;

public:
	char defaultGrid[25][79];
	std::vector<Enemy *> enemies;
	std::vector<Item *> items;
	std::vector<Chambers *> chambers;
	char displayGrid[25][79];
	Stair * stair;

	Floor(int level, bool won, bool visible, bool hostile, bool spawned, Player * player);
	Floor();
	~Floor();

	void generateEnemies();
	void generateItems();
	void generateChamber();
	bool validTile(Posn pos);
	void setVisible(bool visible);
	void setLevel(int level);
	void setWon(bool won);
	void setHostile(bool hostile);
	void setSpawned(bool spawned);
	bool getVisible();
	int getLevel();
	bool getWon();
	bool getHostile();
	bool getSpawned();
	
};

#endif