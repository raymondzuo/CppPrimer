#include "move.h"
#include <iostream>

using std::cout;
using std::endl;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "Move info: " << endl;
    cout << "x: " << x << " y: " << y << endl;
}

Move Move::add(const Move& m) const
{
    Move tempMove(x + m.x, y + m.y);
    return tempMove;
}

void Move::reset(double a, double b)
{
    this->x = a;
    this->y = b;
}
