#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H
#include <iostream>

class MyComplex
{
private:
    double real;
    double img;

public:
    MyComplex(double real_, double img_);
    MyComplex();

    MyComplex operator+(const MyComplex mc) const;
    MyComplex operator-(const MyComplex mc) const;
    MyComplex operator*(const MyComplex mc) const;
    friend MyComplex operator*(MyComplex mc, double x);
    MyComplex operator~() const;
    friend std::ostream& operator<<(std::ostream& os, MyComplex mc);
};

#endif
