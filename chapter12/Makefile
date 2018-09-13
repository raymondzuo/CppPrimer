chpt12 : chpt12.o cow.o 
	g++ -g  -std=c++11 *.o -o chpt12
chpt12.o :
	g++ -g -std=c++11 -c chpt12.cpp
cow.o : cow.h
	g++ -g -std=c++11 -c cow.cpp

.PHONY : clean
clean : 
	-rm *.o chpt12
