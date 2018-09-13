#include <iostream>
#include "cow.h"

int main()
{
    Cow c;
    c.ShowCow();

    Cow c2("cow2", "haha", 1);
    c2.ShowCow();

    {//析构掉c3,看c2是否正常
        Cow c3 = c2;
        c3.ShowCow();
    }
    c2.ShowCow();

    Cow c4(c2);
    c4.ShowCow();

    Cow c5;
    c5 = c4;

    std::cout << "End main!" << std::endl;
    return 0;
}
