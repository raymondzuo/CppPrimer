// stack.cpp -- Stack member functions
#include "stack.h"
#include <iostream>

Stack::Stack(int n)
{
    items = new Item[n];
    size = n;
}

Stack::Stack(const Stack& stack)
{
    items = new Item[stack.size];
    for(int i = 0; i < stack.size; i++) 
    {
        items[i] = stack.items[i];
    }
    size = stack.size;
}

Stack::~Stack()
{
    if(items)
        delete[] items;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item & item) 
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false; 
}

Stack & Stack::operator=(const Stack& st)
{
    std::cout << "Operator =" << std::endl;

    if(&st == this)
        return *this;
    if(items)
        delete[] items;

    items = new Item[st.size];
    for(int i = 0; i < st.size; i++) 
    {
        items[i] = st.items[i];
    }

    size = st.size;
    return *this;
}
