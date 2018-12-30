chpt131 : testchpt131.o chpt13_1.o
	g++ -g -std=c++11 *.o -o chpt131
chpt13_1.o : 
	g++ -g -std=c++11 -c chpt13_1.cpp
testchpt131.o : 
	g++ -g -std=c++11 -c testchpt131.cpp

.PHONY : clean
clean : 
	-rm *.o chpt131