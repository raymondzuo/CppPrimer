#include "chpt10_2.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Person:: Person(const std::string& ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const
{
    cout << "The full name is(first-last format) : " << endl;
    cout << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
    cout << "The full name is(last-first format) : " << endl;
    cout << lname << " " << fname << endl;
}
