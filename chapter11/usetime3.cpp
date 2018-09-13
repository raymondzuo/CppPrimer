#include <iostream>
#include "mytime3.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    Time t1(2,40);
    Time t2(3,30);
    cout << (t1 + t2) << endl;
    cout << (t1 - t2) << endl;
    cout << (t2 - t1) << endl;
    cout << (t1 * 2) << endl;
    cout << (1 * t1) << endl;

    return 0;
}
