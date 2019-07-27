test: main.o posn.o character.o player.o enemy.o human.o orc.o elf.o dwarf.o goblin.o merchant.o phoenix.o troll.o vampire.o werewolf.o
		g++ -std=c++14 -Werror=vla -g main.o posn.o character.o player.o enemy.o human.o orc.o elf.o dwarf.o goblin.o merchant.o phoenix.o troll.o vampire.o werewolf.o -o test

posn.o: posn.cc posn.h
		g++ -std=c++14 -Werror=vla -c posn.cc

character.o: character.cc character.h
		g++ -std=c++14 -Werror=vla -c character.cc

player.o: player.cc character.h player.h
		g++ -std=c++14 -Werror=vla -c player.cc

enemy.o: enemy.cc character.h enemy.h

human.o: human.cc human.h player.h
		g++ -std=c++14 -Werror=vla -c human.cc

orc.o: orc.cc orc.h player.h
		g++ -std=c++14 -Werror=vla -c orc.cc

elf.o: elf.cc elf.h player.h
		g++ -std=c++14 -Werror=vla -c elf.cc

dwarf.o: dwarf.cc dwarf.h player.h
		g++ -std=c++14 -Werror=vla -c dwarf.cc

goblin.o: goblin.cc goblin.h enemy.h
		g++ -std=c++14 -Werror=vla -c goblin.cc

merchant.o: merchant.cc merchant.h enemy.h
		g++ -std=c++14 -Werror=vla -c merchant.cc

phoenix.o: phoenix.cc phoenix.h enemy.h
		g++ -std=c++14 -Werror=vla -c phoenix.cc

troll.o: troll.cc troll.h enemy.h
		g++ -std=c++14 -Werror=vla -c troll.cc

vampire.o: vampire.cc vampire.h enemy.h
		g++ -std=c++14 -Werror=vla -c vampire.cc

werewolf.o: werewolf.cc werewolf.h enemy.h
		g++ -std=c++14 -Werror=vla -c werewolf.cc

main.o: main.cc posn.h character.h player.h enemy.h human.h dwarf.h elf.h orc.h werewolf.h troll.h goblin.h merchant.h vampire.h phoenix.h
		g++ -std=c++14 -Werror=vla -c main.cc

.Phony: clean

clean:
		rm *.o test

