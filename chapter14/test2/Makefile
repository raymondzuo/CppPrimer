testwine : testwine.o Wine.o
	g++ -g -std=c++11 *.o -o testwine
testwine.o : 
	g++ -g -std=c++11 -c testwine.cpp
Wine.o : 
	g++ -g -std=c++11 -c Wine.cpp

.PHONY : clean
clean : 
	-rm *.o testwine