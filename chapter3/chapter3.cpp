#include <iostream>
#include <climits>
#include <cfloat>

using std::cin;
using std::cout;
using std::endl;

void displayIntInfo();
void displayFloatInfo();
void displayHexInt();
void displayMyHeight();
void displayUsPopulation();
void displayLatitude();

int main()
{
    //displayIntInfo();
    //displayHexInt();
    //displayFloatInfo();
    //displayMyHeight();
    //displayUsPopulation();
    displayLatitude();
}

void displayIntInfo()
{
    /* short 至少要16位
     * int 位数不少于short
     * long 位数至少要32位，且不少于int型
     * long long 位数至少要64为，且不少于long型
     */
    int int_max = INT_MAX;
    short short_max = SHRT_MAX;
    long long_max = LONG_MAX;
    long long ll_max = LLONG_MAX;

    cout << "Int max is: " << int_max << " and int size is: " << sizeof(int) << endl;
    cout << "Short max is: " << short_max << " and short size is: " << sizeof(short) << endl;
    cout << "Long max is: " << long_max << " and long size is: " << sizeof(long) << endl;
    cout << "Long Long max is: " << ll_max << " and long long size is: " << sizeof(long long) << endl;

    int int_max_plus = int_max + 1;
    cout << "Int max plus 1 = " << int_max_plus;
    
    unsigned int uint_max = UINT_MAX;
    cout << "Unsign int max plus 1 = " << ++uint_max; 
}

void displayFloatInfo()
{
    /* float 要求至少要32位
     * double 要求至少要48位，且不能少于float型
     * long double不少于double型，一般是128位*/
    float f_max = FLT_MAX;
    double d_max = DBL_MAX;
    long double ld_max = LDBL_MAX;

    cout << " float max is: " << f_max << " size: " << sizeof(f_max) << endl;
    cout << " double max is : " << d_max << " size: "  << sizeof(d_max) <<  endl;
    cout << " long double max is :" << ld_max << " size: "  << sizeof(ld_max) << endl;
}

void displayHexInt()
{
    int a = 42;
    cout << std::hex;
    cout << "Hex format is: " << a << endl;
}

void displayMyHeight()
{
    int heightCm = 0;
    cout << "Please input your height with cm unit __";
    cin >> heightCm;

    const double cm2Inches = 0.3937008;
    const int inch2Foot = 12;
    
    double heightInch = heightCm * cm2Inches;
    int heightFoot = (int)heightInch / inch2Foot;
    int heightLeaveInch = (int)heightInch % inch2Foot;

    cout << " Your height is :" << heightCm << " in CM." << endl;
    cout << " And " << heightFoot << "'" << heightLeaveInch << "\" in English Unit!";
}

void displayUsPopulation()
{
    cout << "Enter the world's population: " << endl;
    long long worldPop = 0;
    cin >> worldPop;

    cout << "Enter the us's pupulation: " << endl;
    long long usPop = 0;
    cin >> usPop;

    double percent = 0.0;
    percent = (double)usPop / worldPop * 100;
    cout << "The population of the US is: " << percent << "% of the world population!";
}

void displayLatitude()
{
    int i = 1;
    int b = i << 1;
    cout << "i's value is : " << i << "b is: " << b << endl;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    int degree = 0;
    cin >> degree;

    cout << endl;
    cout << "Second, enter the minutes of arc: ";
    int minutes = 0;
    cin >> minutes;

    cout << endl;
    cout << "THird, enter the seconds of arc: ";
    int second = 0;
    cin >> second;

    float latitude = 0.0f;
    latitude = degree + (minutes / 60.0f) + (second / 3600.0f);
    cout << endl;
    cout << degree << " degreees," << minutes << " minutes," << second << " seconds = "
        << latitude << " degreees" << endl;
}

