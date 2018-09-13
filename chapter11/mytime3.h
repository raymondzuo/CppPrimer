#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Time
{

private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);

    friend Time operator+(const Time& t1, const Time& t2);
    friend Time operator-(const Time& t1, const Time& t2);
    friend Time operator*(const Time& t1, const double m);
    friend Time operator*(const double m, const Time& t2);
    friend std::ostream& operator<<(std::ostream& os, const Time& t);
};
#endif
