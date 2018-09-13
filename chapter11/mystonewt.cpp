#include "mystonewt.h"

using std::cout;
using std::endl;

MyStonewt::MyStonewt(double lbs, WtMode mode)
{
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    this->mode = mode;
}

MyStonewt::MyStonewt(int stn, double lbs, WtMode mode)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    this->mode = mode;
}

MyStonewt::MyStonewt()
{
    stone = pounds = pds_left = 0;
}

MyStonewt::~MyStonewt()
{

}

void MyStonewt::SetWtMode(WtMode wtMode)
{
    mode = wtMode;
}

void MyStonewt::show_lbs() const
{
    cout << pounds << " pounds" << endl;
}

void MyStonewt::show_stn() const
{
    cout << stone << " stone " << pds_left << " pounds" << endl;
}

MyStonewt::operator int() const
{
    return int (pounds) + 0.5;
}

MyStonewt::operator double() const
{
    return pounds;
}

MyStonewt MyStonewt::operator *(double x) const
{
    double tempLbs = pounds * x;
    MyStonewt temp(tempLbs);

    return temp;
}

MyStonewt MyStonewt::operator + (MyStonewt myStonewt) const
{
   double pounds_ = this->pounds + myStonewt.pounds;
   MyStonewt temp(pounds_);

   return temp;
}

MyStonewt MyStonewt::operator - (MyStonewt myStonewt) const
{
    double pounds_ = this->pounds - myStonewt.pounds;
    MyStonewt temp(pounds_);

    return temp;
}

MyStonewt operator *(double x, MyStonewt stn)
{
    double tempLbs = stn.pounds * x;
    MyStonewt temp(tempLbs);

    return temp;
}

std::ostream& operator << (std::ostream& os, const MyStonewt myStoneWt)
{
    if(myStoneWt.mode == MyStonewt::WtMode::Stone)
        os << "Stone: " << myStoneWt.stone << endl;
    else if(myStoneWt.mode == MyStonewt::WtMode::IntPounds)
        os << "Int Pounds: " << myStoneWt.pounds << endl;
    else if(myStoneWt.mode == MyStonewt::WtMode::DoublePounds)
        os << "Int Pounds: " << myStoneWt.pds_left << endl;

    return os;
}
