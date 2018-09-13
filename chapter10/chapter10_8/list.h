#ifndef LILST_H
#define LILST_H

typedef int Item;
typedef void(* Pfunc)(Item &);
struct Node//Todo：使用链表实现
{
    Item value;
    Item *next;
};

class List
{
public:
    bool add(Item& item);
    bool isempty() const;
    bool isfull() const;
    void visit(Pfunc pf);
    void show();
private:
    enum {MAX = 10};
    Item data[MAX];
    int length;
};

#endif
