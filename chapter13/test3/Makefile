chpt133 : testABC.o dma.o
	g++ -g -std=c++11 *.o -o chpt133
testABC.o : 
	g++ -g -std=c++11 -c testABC.cpp
dma.o : 
	g++ -g -std=c++11 -c dma.cpp

.PHONY : clean
clean : 
	-rm *.o chpt133