#include "Wine.h"

using std::cout;
using std::endl;
using std::cin;

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) 
      : string(l), yearCnt(y), PairArray(ArrayInt(y), ArrayInt(y))
{
    for(int i = 0; i <  y; i++)
    {
        this->first[i] = yr[i]; 
        this->second[i] = bot[i]; 
    }
}

Wine::Wine(const char *l, int y) : string(l), yearCnt(y), PairArray(ArrayInt(0), ArrayInt(0))
{
}

void Wine::GetBottles()
{
    cout << "Enter Gully Wash data for " << yearCnt << " year(s):" << endl;    
    for(int i = 0; i < yearCnt; i++)
    {
        cout << "Enter year: ";
        cin >> this->first[i];

        cout << "Enter bottles for that year: ";
        cin >> this->second[i];
    }
}

const std::string& Wine::Label() const
{
    return (const string &)(*this);
}

void Wine::Show() const
{
    cout << "Wine: " << (const string &)(*this) << endl;
    cout << "\t" << "Year\tBottles\t" << endl;
    for(int i = 0; i < yearCnt; i++)
    {
        cout << "\t" << this->first[i] << "\t" << this->second[i] << "\t" << endl;
    }
}

int Wine::sum() const
{
    //int nsize = yearInfo.second.size();
    return this->second.sum();
}