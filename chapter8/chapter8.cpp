#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

int counter = 0;
struct CandyBar
{
    char name[20];
    double weight;
    int calorie;
};

struct stringy
{
    char * str;
    int ct;
};

void test1(const char * strSomething, int n = 0);
void test21(CandyBar& candy, const char* name = "Millennium Munch", double dWeight = 2.85,
            int nCalorie = 350);
void test22(const CandyBar& candy);
void test3(std::string & strLower);

void show(const stringy& stringyParam, int count = 1);
void show(char charArr[], int count = 1);
void set(stringy& stringyParam, char charArr[]);

template <typename T>
T max5(const T arr[5]);

template <typename T>
T maxn(T*, int);

template <> const char* maxn(const char* [], int);

int main()
{
    //test1("haha");
    //test1("heihei");
    //CandyBar mycandy;
    //test21(mycandy);
    //test22(mycandy);
    //std::string input;
    //getline(cin, input);
    //while(input != "q")
    //{
    //    test3(input);
    //    cout << input << endl;
    //    getline(cin, input);
    //}
    //stringy beany;
    //char testing[] = "Reality isn't what it used to be.";

    //set(beany, testing);
    //show(beany);
    //show(beany, 2);
    //testing[0] = 'D';
    //testing[1] = 'u';
    //show(testing);
    //show(testing, 3);
    //show("Done!");

    //delete[] beany.str;
    //int a[5]{1,2,3,4,5};
    //double b[5]{1.0,2.1,3.1,4.4,5.0};
    //
    //cout << "Max int is:" << max5(a);
    //cout << "Max double is:" << max5(b);

    //int c[6]{1,2,3,4,5,6};
    //int d[4]{1,2,3,4};

    //cout << endl;
    //cout << "Max int n is: " << maxn(c,6) << endl;
    //cout << "Max double n is: " << maxn(d,4) << endl;
    const char* a[] = {"fuck","hahahhahahaha","heiheih"};
    cout << "max string is: " << maxn(a, 3) << endl;

    return 0;
}

void test1(const char * strSomething, int n)
{
    counter ++;
    for(int i = 0; i < counter; i++)
    {
        cout << strSomething << endl;
    }
}
void test21(CandyBar& candy, const char* name, double dWeight,
            int nCalorie)
{
    strcpy(candy.name, name);
    candy.weight = dWeight;
    candy.calorie = nCalorie;
}

void test22(const CandyBar& candy)
{
    cout << "Candy info: " << candy.name << " weight: " << candy.weight << " calorie:" << candy.calorie
        << endl;
}

void test3(std::string & strLower)
{
    for(int i = 0;i < strLower.size(); i++)
    {
        strLower[i] = std::toupper(strLower[i]);
    }
}

void show(const stringy& stringyParam, int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << stringyParam.str << endl;
    }
}

void show(char charArr[], int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << charArr << endl;
    }
}

void set(stringy& stringyParam, char charArr[])
{
    char * temp = charArr;
    int size = 0;
    while(*temp != '\0')
    {
        size++;
        temp++;
    }

    stringyParam.str = new char[size + 1];
    strcpy(stringyParam.str, charArr);
    stringyParam.ct = size;
}

template <typename T>
T max5(const T arr[5])
{
    T temp = arr[0];
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > temp)
          temp = arr[i];
    }

    return temp;
}

template <typename T>
T maxn(T* arr, int n)
{

    T temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > temp)
          temp = arr[i];
    }

    return temp;
}

template<> const char* maxn(const char* arr[], int n)
{
    int size = 0;
    const char * targetPtr = 0;

    for(int i = 0; i < n; i++)
    {
        int tempSize = 0;
        const char * tempPtr = arr[i];

        while(*tempPtr != '\0')
        {
            tempSize++;
            tempPtr++;
        }
        
        if(tempSize > size)
        {
            size = tempSize;
            targetPtr = arr[i];
        }
    }
    
    return targetPtr;
}
