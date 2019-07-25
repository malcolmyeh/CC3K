#ifndef POSN_H
#define POSN_H

#include <string>

class Posn {
public:
	int x;
	int y;
	Posn getNew(std::string dir);
	bool operator==(const Posn& p);
	Posn() {}
	Posn(int x, int y): x{x}, y{y} {}
};

#endif