#include "chpt13_1.h"
#include <iostream>
#include <cstring>

using std::cout; 
using std::endl; 

Cd::Cd(char *s1, char *s2, int n, double x) : selections(n), playtime(x)
{
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
}

Cd::Cd(const Cd &d)
{
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

void Cd::Report() const
{
    cout << "performers: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

Cd& Cd::operator=(const Cd &d)
{
    if(this == &d)
        return *this;
    memset(performers, 0, sizeof performers);
    std::strcpy(performers, d.performers);
    memset(label, 0, sizeof label);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

///////////////////// Classic class ///////////////////////

Classic::Classic(char *s1, char *s2, char *s3, int n, double x)
         : Cd(s1, s2, n, x)
{
    std::strcpy(main, s3);
}

Classic::Classic(const Classic &c) : Cd(c)
{
    std::strcpy(main, c.main);
}

Classic::Classic()
{
    main[0] = '\0';
}

void Classic::Report() const
{
    cout << "main: " << main << endl;
}

Classic& Classic::operator=(const Classic &d)
{
    if(this == &d)
        return *this;
    Cd::operator=(d);
    memset(main, 0, sizeof main);
    std::strcpy(main, d.main);
}

