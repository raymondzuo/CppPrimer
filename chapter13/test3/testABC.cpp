// usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"
int main()
{
    using std::cout;
    using std::endl;

    const int SIZE = 3;
    ABC ** arr = new ABC*[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        switch(i)
        {
            case 0:
            {
                arr[i] = new baseDMA("===baseDMA===", 10);
                break;
            }
            case 1:
            {
                arr[i] = new lacksDMA("haha", "===lacksDMA===", 10);
                break;
            }
            case 2:
            {
                arr[i] = new hasDMA("heihei", "===hasDMA===", 10);
                break;
            }
        }
    }


    for(int i = 0; i < SIZE; i++)
    {
        arr[i]->View();
        cout << *arr[i] << endl;//call cout << ABC
    }

    delete[] arr;
    /*
    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying baseDMA object:\n";
    cout << shirt << endl;
    cout << "Displaying lacksDMA object:\n";
    cout << balloon << endl;
    cout << "Displaying hasDMA object:\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy:\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;
    // std::cin.get();*/
    return 0; 
}
