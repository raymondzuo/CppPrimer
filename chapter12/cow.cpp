#include <iostream>
#include "cow.h"
#include <cstring>

Cow::Cow()
{
    hobby = new char[3];
    std::strcpy(hobby, "ho");
    std::strcpy(name, "xx");
    weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    std::strcpy(name, nm);

    int nLength = std::strlen(ho);
    hobby = new char[nLength + 1];
    std::strcpy(hobby, ho);

    weight = wt;
}

Cow::Cow(const Cow& c)
{
    /*此处不可以这样写,因为hobby未经初始化,使用此指针会导致不明确的错误*/
    //if(this->hobby != nullptr)        
    //{
    //    //std::cout << this->hobby << std::endl;
    //    //delete[] hobby;
    //}
    std::cout << "Copy"  << std::endl;

    int nLen = std::strlen(c.hobby);
    hobby = new char[nLen + 1];
    std::strcpy(hobby, c.hobby);

    std::memset(name, '\0', 20);
    std::strcpy(name, c.name);

    weight = c.weight;
}

Cow::~Cow()
{
    if(hobby)
      delete[] hobby;
    std::cout << "Destruct: " << name << std::endl;
}

Cow& Cow::operator=(const Cow& c)
{
    std::cout << "====" << std::endl;

    if(&c == this)
        return *this;

    if(hobby)        
      delete[] hobby;

    int nLen = std::strlen(c.hobby);
    hobby = new char[nLen + 1];
    std::strcpy(hobby, c.hobby);

    std::memset(name, '\0', 20);
    std::strcpy(name, c.name);

    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const //display all cow data
{
    std::cout << "Cow hobby: " << hobby
        << " name: " << name << " weight: " << weight <<std::endl;
}
