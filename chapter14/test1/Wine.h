#ifndef WINE_H
#define WINE_H

#include <iostream>
#include <string>
#include <valarray>

class Wine
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef std::pair<ArrayInt, ArrayInt> PairArray;

    std::string label;
    PairArray yearInfo;
    int yearCnt;

public:
    Wine(): label("NULL"), yearCnt(0), yearInfo(ArrayInt(0), ArrayInt(0))
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