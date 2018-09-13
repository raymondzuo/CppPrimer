#include "chpt5.h"
#include <iostream>

using std::cout;
using std::endl;


int main()
{
    BankAccount ba("Raymondzuo", "0017895647111111", 100.00);
    ba.ShowAccount();

    BankAccount ba2("xiaomeng", "0017895647111112", 2000.00);
    ba2.ShowAccount();
    cout << "Add sum 3000" << endl;
    ba2.AddSum(3000);
    ba2.ShowAccount();
    cout << "Take money 180 yuan" << endl;
    ba2.TakeSum(180);
    ba2.ShowAccount();

    return 0;
}
