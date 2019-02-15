#include "Gunslinger.h"

void Gunslinger::Data() const
{
    std::cout << "Draw time is: " << drawtime << " kehen is: " << kehen << std::endl;
}
void Gunslinger::Show() const
{
    Person::Data();
    Gunslinger::Data();
}

void Gunslinger::Set()
{
    Person::Set();
    std::cout << "Input draw time: " << std::endl;
    std::cin >> drawtime;
    std::cout << "Input kehen count: " << std::endl;
    std::cin >> kehen;
}