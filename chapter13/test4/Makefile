chpt134 : testPort.o Port.o
	g++ -g -std=c++11 *.o -o chpt134
testPort.o : 
	g++ -g -std=c++11 -c testPort.cpp
Port.o : 
	g++ -g -std=c++11 -c Port.cpp 

.PHONY : clean
clean : 
	-rm *.o chpt134