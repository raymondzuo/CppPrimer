#include "mycomplex.h"

MyComplex::MyComplex(double real_, double img_)
{
    real = real_;
    img = img_;
}

MyComplex::MyComplex()
{
    real = 0.0;
    img = 0.0;
}

MyComplex MyComplex::operator+(const MyComplex mc) const
{
    double tempReal = this->real + mc.real;
    double tempImg = this->img + mc.img;

    MyComplex tempmc(tempReal, tempImg);
    return tempmc;
}
MyComplex MyComplex::operator-(const MyComplex mc) const
{
    double tempReal = this->real - mc.real;
    double tempImg = this->img - mc.img;

    MyComplex tempmc(tempReal, tempImg);
    return tempmc;
}

MyComplex MyComplex::operator*(const MyComplex mc) const
{
    double tempReal = this->real * mc.real - this->img * mc.img;
    double tempImg = this->real * mc.img + this->img * mc.real;

    MyComplex tempmc(tempReal, tempImg);
    return tempmc;
}

MyComplex operator*(MyComplex mc, double x)
{
    double tempReal = mc.real * x;
    double tempImg = mc.img * x;

    MyComplex tempmc(tempReal, tempImg);
    return tempmc;
}

MyComplex MyComplex::operator~() const
{
    MyComplex mc(this->real, -this->img);
    return mc;
}

std::ostream& operator<<(std::ostream& os, MyComplex mc)
{
    os << "real: " << mc.real << " img: " << mc.img << std::endl;
    return os;
}
