#include <cmath>
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;
using std::cin;

void output(int param); 
void displayName(string& name, string address);
int convertCelsius2Fah(int celsius);

int main()
{
    /*
    string name, address;
    int age = 0;
    cout << "Please input your name and address: " << endl;
    cin >> name;
    cin >> address;
    cin >> age;
    displayName(name, address);
    cout << "Your age contains " << (age * 12) << " months!";
    */
    int celsiusTemp = 0;
    cout << "Please enter a Celsius value: " ;
    cin >> celsiusTemp;

    cout << celsiusTemp << " degrees Celsius is " << convertCelsius2Fah(celsiusTemp)
        << " degrees Fahrenheit! ";

    return 0;
}

void output(int param)
{
    cout << "input param is : " << param;
    cout << std::endl;
}

void displayName(string& name, string address)
{
    cout << "Your name is: " << name << endl;
    cout << "And your address is : " << address ;
}

int convertCelsius2Fah(int celsius)
{
    return (1.8 * celsius + 32.0);
}
