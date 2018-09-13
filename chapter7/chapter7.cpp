#include <iostream>
#include <fstream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

struct applicant
{
    char name[30];
    int credit_ratings[3];
};

int replace(char * str, char c1, char c2);
void displayStruct(applicant appli);
void displayStruct(applicant* appli);

double *test1();
void test2();
int test2Input(int *, int);
void test2Display(int *, int);
void test2Avg(int *, int);
void test5(); 
long factorial(int n);

void test6();
void Fill_array(double *, int);
void Show_array(double *, int);
void Reverse_array(double *, int);

void test10();
typedef double(* pFunc)(double, double);
double calculate(double, double, pFunc*, int);
double add(double, double);
double minus(double, double);
double multi(double, double);
double div(double, double);

void f1(applicant * a);
const char * f2(const applicant * a1, const applicant * a2);

int main()
{
    /*
    char name[] ="Tim Tomson";
    int count = replace(name, 'T', 'S');
    cout << "New name is: " << name << " changed count : " << count << endl;

    char temp = *"pizza";
    cout << temp;
    applicant appli, *pAppli;
    strcpy(appli.name, "raymond");//数组名不是一个左值！所以不可以直接赋值
    appli.credit_ratings[0] = 1;
    appli.credit_ratings[1] = 2;
    appli.credit_ratings[2] = 3;
    pAppli = &appli;

    displayStruct(appli);
    displayStruct(pAppli);

    double * results = test1();
    for(int i = 0; i < 3;i++)
    {
        cout << (*(results + i)) << endl;
    }

    delete[] results;*/

    /* 函数指针相关的用法,以及与数组混用的写法
    void(* p1)(applicant*) = f1;
    const char *(* p2)(const applicant*, const applicant*) = f2;
    void(* ap[5])(applicant*);
    const char *(*(*pa)[10])(const applicant*, const applicant*);
    typedef const char *(* p_func)(const applicant*, const applicant*);
    p_func (* paa)[10];
    */

    //test2();
    //test5();
    //test6();
    test10();
    return 0;
}


int replace(char * str, char c1, char c2)
{
    int times = 0;
    while(*str != '\0')
    {
        if(*str == c1)
        {
            *str = c2;
            times++;
        }

        str++;
    }

    return times;
}

void displayStruct(applicant appli)
{
    cout << appli.name << endl;
    for(int i =0;i<3;i++)
    {
        cout << appli.credit_ratings[i] << " ";
    }
}

void displayStruct(applicant* appli)
{
    cout << appli->name << endl;
    for(int i =0;i<3;i++)
    {
        cout << appli->credit_ratings[i] << " ";
    }

}

double *test1()
{
    cout << "Input 2 non-zero numbers: " << endl;

    const int SIZE = 3;
    double inputs[SIZE][2];
    double * results = new double[SIZE];

    int i = 0;
    while(cin >> inputs[i][0] && cin >> inputs[i][1])
    {
        double x = inputs[i][0];
        double y = inputs[i][1];

        if(x == 0 || y == 0)
          break;

        results[i] = 2.0 * x * y / (x + y);

        i++;
        if(i >= SIZE)
          break;
    }
    
    return results;
}

void test2()
{
    const int SIZE = 10;
    int * allInputs = new int[SIZE];
    int count = 0;
    count = test2Input(allInputs, SIZE);
    test2Display(allInputs,count);
    test2Avg(allInputs, count);

    delete[] allInputs;
}

int test2Input(int * scores, int size)
{
    cout << "Input golf score: " << endl;

    int i = 0;
    while(cin >> scores[i])
    {
        i++;
        if(i >= size)
          break;
    }

    return i;
}

void test2Display(int * scores, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << scores[i] <<  "--" << endl;
    }
}

void test2Avg(int * scores, int size)
{
    long total = 0;
    for(int i = 0; i < size; i++)
    {
        total += scores[i];
    }

    cout << "Avg score: " << (total / size) << endl;
}

void test5()
{
    cout << "Please input a int number: " << endl;
    int n;
    cin >> n;

    long result = factorial(n);
    cout << "Result is: " << result << endl;
}

long factorial(int n)
{
    if(n ==0)
      return 1;

    return n * factorial(n - 1);
}

void test6()
{
    const int SIZE = 5;
    double arr[SIZE] = {0};
    Fill_array(arr, SIZE);
    Show_array(arr, SIZE);
    Reverse_array(arr, SIZE);
    Show_array(arr, SIZE);

    Reverse_array(arr + 1, SIZE - 2);
    Show_array(arr, SIZE);
}

void Fill_array(double * arr, int size)
{
    for(int i = 0;i < size; i++)
    {
        cin >> arr[i];
    }
}
void Show_array(double * arr, int size)
{
    for(int i = 0;i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "================" << endl;
}

void Reverse_array(double * arr, int size)
{
    for(int i = 0; i <= size / 2; i++)
    {
        int begin = i;
        int end = size - 1 - i;
        
        if(begin <= end)
        {
            double temp = *(arr + begin);
            *(arr + begin) = *(arr + end);
            *(arr + end) = temp;
        }
        else
        {
            break;
        }
    }
}

void test10()
{
    pFunc calculateFuncs[4] = {add, minus, multi, div};
    calculate(1, 2, calculateFuncs, 4);
}

double calculate(double op1, double op2, pFunc* funcs, int funcCount)
{
    for(int i = 0; i < funcCount;i++)
    {
        cout << "Result " << (i + 1) << " : " << endl;
        cout << (*funcs[i])(op1, op2) << endl;
    }

    return 0;
}

double add(double op1, double op2)
{
    return op1 + op2;
}

double minus(double op1, double op2)
{
    return op1 - op2;
}

double multi(double op1, double op2)
{
    return op1 * op2;
}

double div(double op1, double op2)
{
    return op1 / op2;
}
