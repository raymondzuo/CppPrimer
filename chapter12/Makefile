chpt12 : chpt12.o cow.o string.o stock.o stack.o
	g++ -g  -std=c++11 *.o -o chpt12
chpt12.o :
	g++ -g -std=c++11 -c chpt12.cpp
cow.o : cow.h
	g++ -g -std=c++11 -c cow.cpp
string.o : string1.h
	g++ -g -std=c++11 -c string1.cpp
stock.o : stock20.h
	g++ -g -std=c++11 -c stock20.cpp
stack.o : stack.h
	g++ -g -std=c++11 -c stack.cpp

.PHONY : clean
clean : 
	-rm *.o chpt12
