test4 : main.o Gunslinger.o PokerPlayer.o BadDude.o
	g++ -g -std=c++11 *.o -o test4
main.o : 
	g++ -g -std=c++11 -c main.cpp
#Person.o : 
#	g++ -g -std=c++11 -c 
Gunslinger.o : 
	g++ -g -std=c++11 -c Gunslinger.cpp
PokerPlayer.o : 
	g++ -g -std=c++11 -c PokerPlayer.cpp
BadDude.o : 
	g++ -g -std=c++11 -c BadDude.cpp

.PHONY : clean
clean : 
	-rm *.o test4