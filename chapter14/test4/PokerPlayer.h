#ifndef POKER_PLAYER_H
#define POKER_PLAYER_H

#include "Person.h"
#include <stdlib.h>

class PokerPlayer : virtual public Person
{
private:

public:
    PokerPlayer(const std::string& strGn = "Nil", const std::string& strFn = "Nil") : Person(strGn, strFn)
    {
    }
    int Draw() const
    {
        return rand() % 52 + 1;
    }
};

#endif