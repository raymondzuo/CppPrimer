//use_tvfm.cpp -- using the Tv and Remote classes
#include <iostream>
#include "tv.h"

int main()
{
    using std::cout;
    Tv s42;
    s42.onoff();
    Remote grey;

    s42.set_remote_exemode(grey);
    cout << "grey now exemode is : " << grey.get_extmode() << std::endl;
    s42.set_remote_exemode(grey);
    cout << "grey now exemode is : " << grey.get_extmode() << std::endl;

    s42.onoff();
    s42.set_remote_exemode(grey);
    cout << "grey now exemode is : " << grey.get_extmode() << std::endl;


    // std::cin.get();
    return 0; 
}
