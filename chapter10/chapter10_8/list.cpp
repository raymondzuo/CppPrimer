#include "list.h"
#include <iostream>

using std::cout;
using std::endl;

bool List::add(Item& item)
{
    if(length < MAX)
    {
        data[length++] = item;
        return true;
    }
    else
        return false;
}

bool List::isempty() const
{
    return length == 0;
}

bool List::isfull() const
{
    return length >= MAX;
}

void List::visit(Pfunc pf)
{
    for(int i = 0; i < length; i++)
    {
        if(pf)
        {
            pf(data[i]);
        }
    }
}

void List::show()
{
    for(int i = 0; i < length; i++)
    {
        cout << "-- " << data[i] << endl;
    }
}
