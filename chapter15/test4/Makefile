test4 : sales.o use_sales.o
	g++ -g -std=c++11 *.o -o test4
sales.o : 
	g++ -g -std=c++11 -c sales.cpp
use_sales.o : 
	g++ -g -std=c++11 -c use_sales.cpp

.PHONY : clean
clean : 
	-rm *.o test4