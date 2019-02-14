#ifndef WINE_H
#define WINE_H

#include <iostream>
#include <string>
#include <valarray>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;
using std::string;

class Wine : string, PairArray
{
private:
    int yearCnt;

public:
    Wine(): string("NULL"), yearCnt(0), PairArray(ArrayInt(0), ArrayInt(0))
    {
    }

    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);
    void GetBottles();
    const std::string& Label() const;
    void Show() const;
    int sum() const;
};

#endif