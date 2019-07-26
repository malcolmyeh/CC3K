cc3k: main.o posn.o floor.o character.o player.o human.o game.o
		g++ -std=c++14 -Werror=vla -g main.o posn.o floor.o character.o player.o human.o game.o -o cc3k

posn.o: posn.cc posn.h
		g++ -std=c++14 -Werror=vla -c posn.cc

character.o: character.cc character.h
		g++ -std=c++14 -Werror=vla -c character.cc

player.o: player.cc character.h player.h
		g++ -std=c++14 -Werror=vla -c player.cc

human.o: human.cc human.h player.h
		g++ -std=c++14 -Werror=vla -c human.cc

floor.o: floor.cc floor.h posn.h player.h
		g++ -std=c++14 -Werror=vla -c floor.cc

game.o: game.cc game.h
		g++ -std=c++14 -Werror=vla -c game.cc

main.o: main.cc posn.h floor.h character.h player.h human.h
		g++ -std=c++14 -Werror=vla -c main.cc

.Phony: clean

clean:
		rm *.o cc3k

