#include "sales.h"

int main()
{
    using SALES::Sales;
    Sales mySales;
    mySales.ShowSales();

    double yourSalesNumber[4]{1, 2, 3,4 };
    Sales yourSales(yourSalesNumber, 4);
    yourSales.ShowSales();

    return 0;
}
