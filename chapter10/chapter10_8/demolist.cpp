#include "list.h"
#include <iostream>

using std::cout;
using std::endl;

void AddOne(Item& item);

int main()
{
    List mylist;
    cout << "Is my list empty? " << mylist.isempty() << endl;
    Item a = 1, b = 2;
    mylist.add(a);
    mylist.add(b);
    mylist.show();
    
    mylist.visit(&AddOne);
    cout << "Is my list full? " << mylist.isfull() << endl;
    mylist.show();

    return 0;
}

void AddOne(Item& item)
{
    item++;
}
