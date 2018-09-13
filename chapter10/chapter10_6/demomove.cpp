#include "move.h"

int main()
{
    Move m1(1, 2);
    Move m2;
    m1.showmove();
    m2.showmove();

    auto m3 = m2.add(m1);
    m3.showmove();

    m2.reset(10, 20);
    m2.showmove();

    return 0;
}
