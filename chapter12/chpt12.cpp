#include <iostream>
#include "cow.h"
#include "string1.h"
#include "stock20.h"
#include "stack.h"

int main()
{
    /*
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
    String str("haha");
    String str2("HeiHei");

    std::cout << (str + str2) << std::endl;
    str = str.Showlow();
    std::cout << str << std::endl;
    str = str.Showupper();
    std::cout << str << std::endl;

    std::cout << "count: " << str.CountChar('H') << std::endl;
    Stock st;
    Stock st2("microsoft", 35, 1000);
    std::cout << st2 << std::endl;
    {
        Stock st3 = st2;//Destruct
    }
    std::cout << st2 << std::endl;
    Stock st4;
    st4 = st2;
    std::cout << st4 << std::endl;
    */
    Stack st;
    st.push(1);
    st.push(2);

    Stack st2 = st;
    Item item;
    st2.pop(item);
    std::cout << item << std::endl;
    st2.pop(item);
    std::cout << item << std::endl;
    std::cout << "is empty? " << st2.isempty() << std::endl;

    st2.push(3);
    st2.push(4);

    Stack st4 = 2;
    st4 = st2;
    st4.pop(item);
    st4.pop(item);
    std::cout << "is full? " << st4.isfull() << std::endl;

    return 0;
}
