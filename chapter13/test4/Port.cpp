#include "Port.h"

/*****************************************
 * Port Class Methods
 *****************************************/
Port::Port(const char *br, const char *st, int b)
{
   brand = new char[std::strlen(br) + 1]; 
   std::strcpy(brand, br);
   std::strcpy(style, st);
   bottles = b;
}

Port::Port(const Port& p)
{
   brand = new char[std::strlen(p.brand) + 1]; 
   std::strcpy(brand, p.brand);
   std::strcpy(style, p.style);
   bottles = p.bottles;
}

Port & Port::operator=(const Port& p)
{
    if(this == &p)
        return *this;
    delete[] brand;
    brand = new char[std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
    std::memset(style, 0, sizeof style);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator+=(int b)
{
    this->bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    this->bottles -= b;
    if(this->bottles < 0)
        this->bottles = 0;
    return *this;
}

void Port::Show() const
{
    using std::cout;
    using std::endl;

    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p)
{
    os << p.brand << " , " << p.style << " , " << p.bottles << endl;
    return os;
}

/*****************************************
 * VintagePort Class Methods
 *****************************************/
VintagePort::VintagePort()
{
    year = 1900;
    nickname = new char[10];
    nickname[0] = '\0';
}

VintagePort::VintagePort(const char * br, int b, const char *nn, int y) : Port(br, nn, b)
{
    year = y;
    nickname = new char[std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort &vp)
{
    year = vp.year;
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);   
}

VintagePort & VintagePort::operator=(const VintagePort &vp)
{
    if(this == &vp)
        return *this;
    Port::operator=(vp);
    delete[] nickname;
    nickname = new char[std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

void VintagePort::Show() const
{
    using std::cout;
    using std::endl;

    Port::Show();
    cout << "nickname: " << nickname << endl;    
    cout << "year: " << year << endl;
}

ostream &operator<<(ostream & os, const VintagePort & vp)
{
    os << (const Port&)vp << " nickname: " << vp.nickname << " year: " << vp.year;
    return os;
}