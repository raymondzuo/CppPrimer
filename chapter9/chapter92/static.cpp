#include <iostream>
#include <string>

const int Arsize = 10;

void strcount(const std::string str);


int main()
{
    using namespace std;
    char input[Arsize];
    std::string strInput;
    char next;

    cout << "Enter a line : \n";
    //cin.getline(input, Arsize);
    getline(cin, strInput);

    //while(cin)
    //{
    //    cin.get(next);
    //    while(next != '\n')
    //    {
    //        cin.get(next);
    //    }

    //    strcount(strInput);
    //    cout << "Enter next line (empty line to quit): \n";
    //    cin.get(input, Arsize);
    //}
    while(strInput != "")
    {
        strcount(strInput);
        cout << "Enter next line (empty line to quit): \n";
        getline(cin, strInput);
    }

    cout << "Bye \n";

    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    count = str.size();
    //while(*str++)
    //  count++;

    total += count;
    cout << count << " characters\n";
    cout << total <<  " characters total \n";
}
