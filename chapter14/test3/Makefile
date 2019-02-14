testqueue : main.o worker.o
	g++ -g -std=c++11 *.o -o testqueue
main.o : 
	g++ -g -std=c++11 -c main.cpp
#queuetp.o : 
#	g++ -g -std=c++11 -c
worker.o : 
	g++ -g -std=c++11 -c worker.cpp

.PHONY : clean
clean : 
	-rm *.o testqueue