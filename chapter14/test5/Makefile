test5 : useemp.o emp.o
	g++ -g -std=c++11 *.o -o test5
useemp.o : 
	g++ -g -std=c++11 -c useemp.cpp
emp.o : 
	g++ -g -std=c++11 -c emp.cpp

.PHONY : clean
clean : 
	-rm *.o test5