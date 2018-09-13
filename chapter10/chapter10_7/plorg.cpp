#include "plorg.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Plorg::Plorg(const char* nameParam, const int ciParam)
{
    strcpy(name, nameParam);
    ci = ciParam;
}

void Plorg::setCi(const int ciParam)
{
    ci = ciParam;
}

void Plorg::showPlorg() const
{
    cout << "Plorg info: " << endl;
    cout << "name: " << name << endl;
    cout << "ci: " << ci << endl;
}
