#ifndef STACK_H
#define STACK_H

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum{MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isfull() const;
    bool isempty() const;
    bool push(const Item& item);
    bool pop(Item& item);
};

#endif
