#include "sales.h"
#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

SALES::Sales::Sales()
{
    int i = 0;
    while(cin >> this->sales[i])
    {
        i++;
        if(i == SALES::QUARTERS)
          break;
    }

    double total = 0;
    this->min = sales[0];
    for(int i = 0; i < SALES::QUARTERS; i++)
    {
        sales[i] = sales[i];
        if(max < sales[i])
          max = sales[i];
        if(min > sales[i])
          min = sales[i];

        total += sales[i];
    }

    average = total / SALES::QUARTERS; 
}

SALES::Sales::Sales(const double * ar, const int n)
{
    memcpy(this->sales, ar, n * sizeof(*ar));
    double total = 0;
    this->min = sales[0];
    for(int i = 0; i < SALES::QUARTERS; i++)
    {
        sales[i] = sales[i];
        if(max < sales[i])
          max = sales[i];
        if(min > sales[i])
          min = sales[i];

        total += sales[i];
    }

    average = total / SALES::QUARTERS; 
}

void SALES::Sales::ShowSales() const
{
    cout << "Sales info is : " << endl;
    for(int i = 0; i < SALES::QUARTERS; i++)
    {
        cout << "the " << (i + 1) << " season sales: " << this->sales[i] << endl;
    }
    cout << "max is: " << this->max << " min is: " << this->min << " average: " << this->average << endl;
}
