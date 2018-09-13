#ifndef STONEWT_H
#define STONEWT_H

class Stonewt
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();

    void show_lbs() const;
    void show_stn() const;

    operator int() const;
    operator double() const;

    //overload operator
    Stonewt operator *(double x) const;
    friend Stonewt operator *(double x, Stonewt stn);
};
#endif
