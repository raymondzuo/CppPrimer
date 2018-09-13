#include <iostream>
#include <cstring>
#include "./stack/stack.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{
    static double total = 0; 
    customer customer1, customer2;

    strcpy(customer1.fullname, "cus1");
    customer1.payment = 10.1;

    strcpy(customer2.fullname, "cus2");
    customer2.payment = 23.5;

    Stack mystack;
    mystack.push(customer1);
    mystack.push(customer2);

    Item poptemp;
    bool isSuccess = mystack.pop(poptemp);
    total += poptemp.payment;
    cout << "Total now is: " << total << endl;

    mystack.pop(poptemp);
    total += poptemp.payment;
    cout << "Total now is: " << total << endl;

    return 0;
}
