//Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246
#include <iostream>
#include <string>
#include <fstream>
#include "game.h"

void readFile(std::string file, char display[27][89]) {
	std::string str;
	std::ifstream in (file);
	for (int i = 0; i < 27; i++)
    {
        getline(in, str);
        for (int j = 0; j < 89; j++)
        {
            display[i][j] = str[j];
        }
    }
}

void printDisplay(char display[27][89]) {
	system("CLS");
	for (int i = 0; i < 27; i++) {
		for (int j = 0; j < 89; j++) {
			std::cout << display[i][j];
		}
		std::cout << std::endl;
	}
}

void printEnd() {
	system("CLS");
	std::cout << "Thanks for playing Chamber Crawler 3000 +" << std::endl << std::endl;
	std::cout << "Project by Malcolm Yeh, Zayaan Moez, Kai Lu for CS246" << std::endl;
	std::cout << std::endl << std::endl << std::endl;
}

int main(void) {

	char display[27][89];
	readFile("menu.txt", display);
	printDisplay(display);
	std::string status;

	while (true) {

		std::string str;

		do {
			std::cout << std::endl;
			std::cout << "Welcome to CC3K+" << std::endl << std::endl;
			std::cout << "Please choose a race to begin:" << std::endl;
			std::cout << "Human(140 HP, 20 Atk, 20 Def):  h" << std::endl;
			std::cout << "Elf(140 HP, 30 Atk, 10 Def):    e" << std::endl;
			std::cout << "Dwarf(100 HP, 20 Atk, 30 Def):  d" << std::endl;
			std::cout << "Orc(180 HP, 30 Atk, 25 Def):    o" << std::endl;
			std::cin >> str;
		} while(str != "h" && str != "e" && str != "d" && str != "o");
		

		char type = str[0];

		Controller c;
		status = c.runGame(type);
		

		if (status == "restart") {
			system("CLS");
			std::cout << "Restarting Game" << std::endl << std::endl << std::endl;
			continue;
		} else if (status == "win") {
			readFile("won.txt", display);
			printDisplay(display);
		} else if (status == "loss") {
			readFile("gameover.txt", display);
			printDisplay(display);
		} else if (status == "quit") {
			printEnd();
			break;
		}

		do {
			std::cout << std::endl << std::endl;
			std::cout << "Please enter r to restart or q to Quit.";
			std::cin >> str;
		} while(str != "r" || str != "q");

		if (str == "r") {
			system("CLS");
			std::cout << "Restarting Game" << std::endl << std::endl << std::endl;
			continue;
		} else if (str == "q") {
			printEnd();
			break;
		}
	}
	
} 