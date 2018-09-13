#include <cstring>
#include "golf.h"
#include <iostream>

void setgolf(golf& g, const char * name, int hc)
{
    std::strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g)
{
    std::cin.getline(g.fullname,Len);

    if(g.fullname[0] == '\0')
      return 0;
    else
    {
        std::cin >> g.handicap;
        std::cin.get();
        return 1;
    }  
}

void handicap(golf& g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "Golf info: name: " << g.fullname << " hc: " << g.handicap << std::endl;
}
