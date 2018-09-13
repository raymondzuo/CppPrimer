#include <iostream>
#include <cstring>
#include "stonewt.h"
#include "vect.h"
#include "mystonewt.h"
#include "mycomplex.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{
    //Stonewt poppins(9, 2.8);
    ////double p_wt = poppins;
    ////cout << "Convert to double => " << p_wt << endl;
    ////cout << "Convert to int => " << int(poppins) << endl;

    //Stonewt st1 = poppins * 2.1;
    //Stonewt st11 = 2.1 * poppins;
    //Stonewt st2 = 3.2 * poppins;
    //
    //st1.show_lbs();
    //st1.show_stn();

    //st11.show_lbs();
    //st11.show_stn();

    //st2.show_lbs();
    //st2.show_stn();

    //VECTOR::Vector vet(30,40);
    //cout << vet.magval() << vet.angval() << endl;

    //MyStonewt ms(1, 5);
    //cout << ms << endl;
    //ms.SetWtMode(MyStonewt::WtMode::IntPounds);
    //cout << ms << endl;

    //MyStonewt ms2(2, 10.5);
    //MyStonewt ms3 = ms + ms2;
    //cout << ms3 << endl;

    //MyStonewt ms4 = ms2 - ms;
    //cout << ms4 << endl;

    //cout << "ms and ms4 " << (ms < ms4) << endl;
    MyComplex mc1(1.0, 2.0);
    MyComplex mc2(3.0, 4.0);

    MyComplex mc3 = mc1 + mc2;
    MyComplex mc4 = mc2 - mc1;
    MyComplex mc5 = mc2 * mc1;
    MyComplex mc6 = mc2 * 5.0;
    MyComplex mc7 = ~mc6;

    cout << "mc3: " << mc3 << endl;
    cout << "mc4: " << mc4 << endl;
    cout << "mc5: " << mc5 << endl;
    cout << "mc6: " << mc6 << endl;
    cout << "mc7: " << mc7 << endl;
    
    return 0;
}
