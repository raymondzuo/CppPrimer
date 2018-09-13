#ifndef MYSTONEWT_H
#define MYSTONEWT_H
#include <iostream>

class MyStonewt
{
public:
    enum WtMode{Stone = 0, IntPounds, DoublePounds};

private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    WtMode mode;

public:
    MyStonewt(double lbs, WtMode mode = WtMode::Stone);
    MyStonewt(int stn, double lbs, WtMode mode = WtMode::Stone);
    MyStonewt();
    ~MyStonewt();

    void SetWtMode(WtMode mode);
    void show_lbs() const;
    void show_stn() const;

    operator int() const;
    operator double() const;

    //overload operator
    MyStonewt operator + (MyStonewt myStoneWt) const;
    MyStonewt operator - (MyStonewt myStoneWt) const;
    MyStonewt operator *(double x) const;
    friend MyStonewt operator *(double x, MyStonewt stn);
    friend std::ostream& operator << (std::ostream& os, const MyStonewt myStoneWt);

    bool operator<(const MyStonewt mst) const
    {
        return pounds < mst.pounds;
    }

    bool operator>(const MyStonewt mst) const
    {
        return pounds > mst.pounds;
    }

    bool operator==(const MyStonewt mst) const
    {
        return pounds == mst.pounds;
    }

    bool operator>=(const MyStonewt mst) const
    {
        return pounds >= mst.pounds;
    }

    bool operator<=(const MyStonewt mst) const
    {
        return pounds <= mst.pounds;
    }

    bool operator!=(const MyStonewt mst) const
    {
        return pounds != mst.pounds;
    }
};
#endif
