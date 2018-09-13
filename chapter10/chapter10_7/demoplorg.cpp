#include "plorg.h"

int main()
{
    Plorg pl1;
    pl1.showPlorg();

    pl1.setCi(20);
    pl1.showPlorg();

    Plorg pl2("heihei", 30);
    pl2.showPlorg();

    return 0;
}
