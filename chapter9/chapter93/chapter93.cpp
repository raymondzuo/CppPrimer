#include "sales.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    using SALES::Sales;
    Sales s1, s2;

    SALES::setSales(s1);
    SALES::showSales(s1);

    double ar[SALES::QUARTERS];
    for(int i = 0; i < SALES::QUARTERS; i++)
    {
        ar[i] = i * 10.0 + 0.1*i;
    }
    SALES::setSales(s2, ar, SALES::QUARTERS);
    SALES::showSales(s2);

    return 0;
}
