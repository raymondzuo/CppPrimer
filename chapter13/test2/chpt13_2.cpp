#include "chpt13_2.h"
#include <iostream>
#include <cstring>

using std::cout; 
using std::endl; 

Cd::Cd(char *s1, char *s2, int n, double x) : selections(n), playtime(x)
{
    int lenPerformers = std::strlen(s1) + 1;
    performers = new char[lenPerformers];
    std::strcpy(performers, s1);

    int lenLabel = std::strlen(s2) + 1;
    label = new char[lenLabel];
    std::strcpy(label, s2);
}

Cd::Cd(const Cd &d)
{
    int lenPerformers = std::strlen(d.performers) + 1;
    performers = new char[lenPerformers];
    std::strcpy(performers, d.performers);

    int lenLabel = std::strlen(d.label) + 1;
    label = new char[lenLabel];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[50];
    label = new char[50];
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
    delete[] performers;
    performers = new char[std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    delete[] label;
    label = new char[std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

///////////////////// Classic class ///////////////////////

Classic::Classic(char *s1, char *s2, char *s3, int n, double x)
         : Cd(s1, s2, n, x)
{
    main = new char[std::strlen(s3) + 1];
    std::strcpy(main, s3);
}

Classic::Classic(const Classic &c) : Cd(c)
{
    main = new char[std::strlen(c.main) + 1];
    std::strcpy(main, c.main);
}

Classic::Classic()
{
    main = new char[50];
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

    delete[] main;
    main = new char[std::strlen(d.main) + 1];
    std::strcpy(main, d.main);
}