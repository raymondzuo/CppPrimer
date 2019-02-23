test1 : use_tvfm.o tv.o
	g++ -g -std=c++11 *.o -o test1
tv.o : 
	g++ -g -std=c++11 -c tv.cpp
use_tvfm.o : 
	g++ -g -std=c++11 -c use_tvfm.cpp

.PHONY : clean
clean : 
	-rm *.o test1