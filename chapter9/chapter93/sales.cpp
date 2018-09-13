#include "sales.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using SALES::Sales;

void SALES::setSales(SALES::Sales & s, const double ar[], int n)
{
    double total = 0;

    s.min = ar[0];
    for(int i = 0; i < n; i++)
    {
        s.sales[i] = ar[i];
        if(s.max < ar[i])
          s.max = ar[i];
        if(s.min > ar[i])
          s.min = ar[i];

        total += ar[i];
    }

    s.average = total / n; 
}

void SALES::setSales(SALES::Sales & s)
{
    double sales[SALES::QUARTERS];
    int i = 0;

    while(cin >> sales[i])
    {
        i++;
        if(i == SALES::QUARTERS)
          break;
    }

    SALES::setSales(s, sales, SALES::QUARTERS);
}

void SALES::showSales(const Sales & s)
{
        cout << "Sales info is : " << endl;
    for(int i = 0; i < SALES::QUARTERS; i++)
    {
        cout << "the " << (i + 1) << " season sales: " << s.sales[i] << endl;
    }
    cout << "max is: " << s.max << " min is: " << s.min << " average: " << s.average << endl;
}
