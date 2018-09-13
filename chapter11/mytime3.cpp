#include "mytime3.h"


Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes = minutes % 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time& t1, const Time& t2)
{
    Time t;
    t.minutes = t1.minutes + t2.minutes;
    t.hours = t.minutes / 60;
    t.minutes = t.minutes % 60;
    t.hours += t1.hours + t2.hours;

    return t;
}

Time operator-(const Time& t1, const Time& t2)
{
    Time t;
    int totalMins1 = t1.minutes + t1.hours * 60;
    int totalMins2 = t2.minutes + t2.hours * 60;
    int diffMins = totalMins1 - totalMins2;

    t.hours = (diffMins) / 60;
    t.minutes = diffMins % 60;

    return t;
}

Time operator*(const Time& t1, double m)
{
    Time t;
    t.minutes = t1.minutes * m;
    t.hours = t.minutes / 60;
    t.hours += t1.hours * m;
    t.minutes %= 60;

    return t;
}

Time operator*(double m, const Time& t1)
{
    return t1 * m;
}

std::ostream& operator<<(std::ostream& os, const Time& t)
{
    os << "Hour: " << t.hours << " minutes: " << t.minutes;
    return os;
}
