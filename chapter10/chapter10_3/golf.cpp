#include "golf.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Golf::Golf()
{}

Golf::Golf(const char * fullNameParam, const int hcParam)
{
    std::strcpy(fullname, fullNameParam);
    handicap = hcParam;
}

void Golf::SetGolf()
{
    char tempFullname[LEN];
    int tempHandicap;
    std::cin.getline(tempFullname, LEN);
    std::cin >> tempHandicap;
    std::cin.get();

    Golf tempGolf(tempFullname, tempHandicap);
    *this = tempGolf;
}

void Golf::Handicap(const int hc)
{
    handicap = hc;
}

void Golf::ShowGolf() const
{
    cout << "Golf's info are: " << endl;
    cout << "Name: " << this->fullname << endl;
    cout << "Handicap " << this->handicap << endl;
}
