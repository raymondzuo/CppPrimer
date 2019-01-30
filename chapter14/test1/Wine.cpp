#include "Wine.h"

using std::cout;
using std::endl;
using std::cin;

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) 
      : label(l), yearCnt(y), yearInfo(ArrayInt(y), ArrayInt(y))
{
    for(int i = 0; i <  y; i++)
    {
        yearInfo.first[i] = yr[i]; 
        yearInfo.second[i] = bot[i]; 
    }
}

Wine::Wine(const char *l, int y) : label(l), yearCnt(y), yearInfo(ArrayInt(0), ArrayInt(0))
{
}

void Wine::GetBottles()
{
    cout << "Enter Gully Wash data for " << yearCnt << " year(s):" << endl;    
    for(int i = 0; i < yearCnt; i++)
    {
        cout << "Enter year: ";
        cin >> yearInfo.first[i];

        cout << "Enter bottles for that year: ";
        cin >> yearInfo.second[i];
    }
}

const std::string& Wine::Label() const
{
    return this->label;
}

void Wine::Show() const
{
    cout << "Wine: " << label << endl;
    cout << "\t" << "Year\tBottles\t" << endl;
    for(int i = 0; i < yearCnt; i++)
    {
        cout << "\t" << yearInfo.first[i] << "\t" << yearInfo.second[i] << "\t" << endl;
    }
}

int Wine::sum() const
{
    //int nsize = yearInfo.second.size();
    return yearInfo.second.sum();
}