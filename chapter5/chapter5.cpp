#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int sum(int min, int max);
long double factorial(int number);
long sumOfInput();
long manualSales();
void carInfo();
void countWords();
void displayStars();

int main()
{
    /*cout << "Input two number: " << endl;
    int min, max;
    cin >> min;
    cin >> max;
    cout << "Sum of numbers between min and max is: " 
         << sum(min,max);
    cout << "Input a number : " << endl;
    int number;
    cin >> number;
    cout << "Factorial number " << number << " is: " << factorial(number);
    sumOfInput();
    manualSales();
    carInfo();
    countWords();*/
    displayStars();

    return 0;
}

int sum(int min, int max)
{
    int nSum = 0;
    for (int i = min; i <= max; i++)
    {
        nSum += i; 
    }

    return nSum;
}

long double factorial(int number)
{
    long double lFactor = 1;
    for(int i = 1; i <= number; i++)
    {
        lFactor *= i;
    }

    return lFactor;
}

long sumOfInput()
{
    cout << "Please input a number:"<<endl;
    long lSum = 0;
    int inputNum;

    while(cin >> inputNum && inputNum != 0)
    {
        lSum += inputNum;
        cout << "Current sum is: " << lSum << endl;
    }
    
    cout << "All Sum of input is : " << lSum;
    cout << endl;

    return lSum;
}

long manualSales()
{
    const char* months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Agu","Sep","Oct","Nov","Dec"};
    int length = sizeof(months)/sizeof(months[0]);
    long totalSales = 0;
    long latest3YearsSales[3][12];//近三年的销售和
    int years = sizeof(latest3YearsSales)/sizeof(latest3YearsSales[0]);
    for(int j = 0; j < years;j++)
    {
        cout << "Input the year of " << (j + 1) << endl;
        for(int i = 0;i < length;i++)
        {
            cout << "Please input month " << months[i] << " sales:" << endl;
            int thisMonthSales;
            cin >> thisMonthSales;
            latest3YearsSales[j][i] = thisMonthSales;
            totalSales += thisMonthSales;
        }
    }

    long anotherTotal = 0;
    for(int i = 0; i < years; i++)
    {
        for(int j = 0; j < length; j++)
        {
            anotherTotal += latest3YearsSales[i][j];
        }
    }
    cout << "Manual sales count is: " << totalSales << endl;
    cout << "3 yearas total sales count is: " << anotherTotal << endl;
    return totalSales;
}

void carInfo()
{
    struct car
    {
        char name[20];//car name
        int productYear;
    } ;

    cout << "How many cars do you wish to catalog?" << endl;
    int count = 0;
    cin >> count;

    car* myCars = new car[count];
    for(int i = 0;i < count; i++)
    {
        cout << "Car #" << (i + 1) << endl;
        car tempCar;
        cout << "Please enter the make: " << endl;
        cin.getline(tempCar.name, 19);
        cin >> tempCar.name;
        cout << "Please enter the year: " << endl;
        cin >> tempCar.productYear;
        myCars[i] = tempCar;
    }

    cout << "Here is your collection: " << endl;
    for(int i = 0; i < count; i++)
    {
        cout << myCars[i].name << " " << myCars[i].productYear << endl;
    }

    delete[] myCars;
}


void countWords()
{
    char input[20];
    int count = 0;

    cout << "Enter words :" << endl;
    cin >> input;//cin 自动以空格，制表符，换行符为分割, getline吞掉换行，get则保留换行符
    
    while(std::strcmp(input, "done") != 0)
    {
        cin >> input;
        count++;
    }

    cout << "You entered a total of " << count << " words" << endl;         
}

void displayStars()
{
    cout << "Input lines you want to display: " << endl;
    int lines = 0;
    cin >> lines;

    for(int i = 1;i <= lines;i++)
    {
        for(int j = 0;j< lines -i;j++)
        {
            cout << ".";
        }
        for(int k = 0;k < i;k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
