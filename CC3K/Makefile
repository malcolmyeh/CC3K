cc3k: main.o posn.o stair.o chamber.o floor.o character.o player.o enemy.o human.o orc.o elf.o dwarf.o goblin.o merchant.o phoenix.o troll.o vampire.o werewolf.o item.o gold.o barriersuit.o dragon.o potion.o game.o
		g++ -std=c++14 -Werror=vla -g main.o posn.o stair.o chamber.o floor.o character.o player.o enemy.o human.o orc.o elf.o dwarf.o goblin.o merchant.o phoenix.o troll.o vampire.o werewolf.o item.o gold.o barriersuit.o dragon.o potion.o game.o -o cc3k

posn.o: posn.cc posn.h
		g++ -std=c++14 -Werror=vla -c posn.cc

stair.o: stair.cc stair.h
		g++ -std=c++14 -Werror=vla -c stair.cc

chamber.o: chamber.cc chamber.h posn.h
		g++ -std=c++14 -Werror=vla -c chamber.cc

character.o: character.cc character.h
		g++ -std=c++14 -Werror=vla -c character.cc

player.o: player.cc character.h player.h
		g++ -std=c++14 -Werror=vla -c player.cc

enemy.o: enemy.cc character.h enemy.h
		g++ -std=c++14 -Werror=vla -c enemy.cc

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

dragon.o: dragon.cc dragon.h enemy.h barriersuit.h gold.h
		g++ -std=c++14 -Werror=vla -c dragon.cc

item.o: item.cc item.h
		g++ -std=c++14 -Werror=vla -c item.cc

gold.o: gold.cc gold.h item.h
		g++ -std=c++14 -Werror=vla -c gold.cc

potion.o: potion.cc potion.h item.h
		g++ -std=c++14 -Werror=vla -c potion.cc

barriersuit.o: barriersuit.cc barriersuit.h item.h
		g++ -std=c++14 -Werror=vla -c barriersuit.cc

floor.o: floor.cc floor.h posn.h character.h player.h enemy.h human.h dwarf.h elf.h orc.h werewolf.h troll.h goblin.h merchant.h vampire.h phoenix.h item.h gold.h potion.h barriersuit.h dragon.h chamber.h stair.h
		g++ -std=c++14 -Werror=vla -c floor.cc

game.o: game.cc game.h
		g++ -std=c++14 -Werror=vla -c game.cc

main.o: main.cc floor.h game.h
		g++ -std=c++14 -Werror=vla -c main.cc

.Phony: clean

clean:
		rm *.o cc3k