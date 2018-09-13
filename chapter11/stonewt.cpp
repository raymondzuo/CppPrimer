#include "stonewt.h"
#include <iostream>

using std::cout;
using std::endl;

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()
{

}

void Stonewt::show_lbs() const
{
    cout << pounds << " pounds" << endl;
}

void Stonewt::show_stn() const
{
    cout << stone << " stone " << pds_left << " pounds" << endl;
}

Stonewt::operator int() const
{
    return int (pounds) + 0.5;
}

Stonewt::operator double() const
{
    return pounds;
}

Stonewt Stonewt::operator *(double x) const
{
    double tempLbs = pounds * x;
    Stonewt temp(tempLbs);

    return temp;
}

Stonewt operator *(double x, Stonewt stn)
{
    double tempLbs = stn.pounds * x;
    Stonewt temp(tempLbs);

    return temp;
}
