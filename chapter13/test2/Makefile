chpt132 : testchpt132.o chpt13_2.o
	g++ -g -std=c++11 *.o -o chpt132
chpt13_2.o : 
	g++ -g -std=c++11 -c chpt13_2.cpp
testchpt132.o : 
	g++ -g -std=c++11 -c testchpt132.cpp

.PHONY : clean
clean : 
	-rm *.o chpt132