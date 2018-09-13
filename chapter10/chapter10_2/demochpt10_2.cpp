#include "chpt10_2.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.Show();
    one.FormalShow();

    two.Show();
    two.FormalShow();

    three.Show();
    three.FormalShow();

    return 0;
}
