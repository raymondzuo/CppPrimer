#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
private:
    std::string strGivenName; //名
    std::string strFamilyName; //姓
protected:
    void Data() const
    {
        std::cout << "GivenName : " << strGivenName << " FamilyName: " << strFamilyName << std::endl;
    }
public:
    Person(const std::string& strGn = "Nil", const std::string& strFn = "Nil") : strGivenName(strGn), strFamilyName(strFn)
    { }
    virtual ~Person(){};

    virtual void Show() const
    {
        Data();
    }

    virtual void Set()
    {
        std::cout << "Input given name: " << std::endl;
        std::cin >> strGivenName;

        std::cout << "Input family name: " << std::endl;
        std::cin >> strFamilyName;
    }
};

#endif