#ifndef POSN_H
#define POSN_H

struct Posn {
public:
	int x;
	int y;
	Posn getNew(std::string dir);
	bool operator==(const Posn& p);
};

#endif