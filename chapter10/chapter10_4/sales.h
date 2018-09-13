#ifndef SALES_H
#define SALES_H

namespace SALES
{
    const int QUARTERS = 4;

    class Sales
    {
    public:
        Sales();
        Sales(const double * ar, const int n);
        void ShowSales() const;
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
}

#endif
