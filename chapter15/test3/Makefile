test3 : error4.o
	g++ -g -std=c++11 *.o -o test3
error4.o : 
	g++ -g -std=c++11 -c error4.cpp

.PHONY : clean
clean : 
	-rm *.o test3