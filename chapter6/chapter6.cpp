#include <iostream>
#include <array>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;

void test3();
void test61();
void test62();
void test63();
void test64();
void test65();
void test66();
void test68();
void test69();

const int strsize = 20;
struct bop {
    char fullName[strsize];
    char title[strsize];
    char bopName[strsize];
    int preference;
};

int main()
{
    //test3();
    //test61();
    //test62();
    //test63();
    //test64();
    //test65();
    //test66();
    //test68();
    test69();
    return 0;
}

void test3()
{
    char ch;
    int ct1,ct2;

    ct1 = ct2 = 0;
    while((ch = cin.get()) != '$')
    {
        cout << ch;
        ct1 ++;
        if(ch = '$')
          ct2++;
        cout << ch;
    }

    cout << "ct1 = " << ct1 << " , ct2 = " << ct2 << endl;
}

void test61()
{
    cout << "Please input some words:" << endl;

    char ch;
    while(cin >> ch && ch != '@')
    {
        if (isalpha(ch))
        {
            if(isupper(ch))
              cout << (char)tolower(ch);
            else
              cout << (char)toupper(ch);
        }
    }
}


void test62()
{
    cout << "Please input some digital number:";
    std::array<double, 10> allNums;

    double number = 0;
    int count = 0;
    double total = 0;

    while( cin >> number)
    {
        if(count >= 10)
          break;
        allNums.fill(number);
        total += number;
        count++;
    }
    
    cout << "Avg : " << (total / count) << endl;
}

void test63()
{
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore" << "\t" << "p) pianist" << endl;
    cout << "t) tree" << "\t" << "g) game" << endl;
    char option;

    std::string menu;
    while(cin >> option)
    {
        switch(option)
        {
            case 'c':
                menu = "carnivore";
                break;
            case 'p':
                menu = "pianist";
                break;
            case 't':
                menu = "tree";
                break;
            case 'g':
                menu = "game";
                break;
            default:
                break;
        }
        if(!menu.empty())
        {
            cout << "A maple is a " << menu << endl;
            break;
        }
        else
        {
            cout << "Please enter a c, p, t, or g:" << endl;
            continue;
        }
    }
}

void test64()
{
    const int size = 4;
    bop init[size] = {
        {
            "ray1","PM","R1",1
        },
        {
            "ray2","coder","R2",0
        },
        {
            "ray3","CEO","R3",2
        },
        {
            "ray4","CTO","R4",2
        }
    };

    cout << "Benevolent Order of Programmmers Report" << endl;
    cout << "a. display by name" << "\t\t\t" << " b. display by title" << endl;
    cout << "c. display by bopname" << "\t\t\t" << " d. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice: " << endl;
    char choice;
    while(cin >> choice)
    {
        bool isRight = true;
        switch(choice)
        {
            case 'a':
                for(int i = 0; i < size; i++)
                  cout << init[i].fullName << endl;
                break;
            case 'b':
                for(int i = 0; i < size; i++)
                  cout << init[i].title << endl;
                break;
            case 'c':
                for(int i = 0; i < size; i++)
                  cout << init[i].bopName << endl;
                break;
            case 'd':
                for(int i = 0; i < size; i++)
                {
                   int prefer = init[i].preference; 
                   switch(prefer)
                   {
                        case 0:
                           cout << init[i].fullName << endl;
                           break;
                        case 1:
                           cout << init[i].title<< endl;
                           break;
                        case 2:
                           cout << init[i].bopName<< endl;
                           break;
                   }
                }
                break;
            case 'q':
                break;
            default:
                isRight = false;
                break;
        }
        if(isRight)
          break;
        else
          cout << "Please input a right option!" << endl;
    }
}

void test65()
{
   cout << "Please input your income: " << endl; 
   long income;

   while(cin >> income && income > 0)
   {
       float tax = 0;
       if(income > 5000){
           tax +=  10000 * 0.1f;
       }
       if(income > 15000){
           tax += 20000 * 0.15f;
       }
       if(income > 35000){
           tax += (income - 35000) * 0.20f;
       }

       cout << "Tax: " << tax;
   }
}

void test66()
{
    struct donation{
        char name[20];
        double donation;
    };

    cout << "Please input the donation people count: " << endl;
    size_t donationCount = 0;
    cin >> donationCount;
    cin.get();//吃掉回车，否则无法getline

    donation *donationInfs = new donation[donationCount];
    for(size_t i = 0; i < donationCount; i++){
        cout << "Donationer name : " << endl;
        cin.getline(donationInfs[i].name, 20);
        cout << "Donation: " << endl;
        cin >> donationInfs[i].donation;
        cin.get();
    }

    bool isNone = true;
    cout << "Grand Patrons:" << endl;
    for(size_t i = 0; i < donationCount; i++){
       if(donationInfs[i].donation > 10000)
       {
           isNone = false;
           cout << "Name : " << donationInfs[i].name << "\t\t" << " Donation: " << donationInfs[i].donation << endl;
       }
    }

   if(isNone)
     cout << "None" << endl;

    isNone = true;
    cout << "Patrons:" << endl;
    for(size_t i = 0; i < donationCount; i++){
       if(donationInfs[i].donation <= 10000 && donationInfs[i].donation > 0)
       {
            isNone = false;
            cout << "Name : " << donationInfs[i].name << "\t\t" << " Donation: " << donationInfs[i].donation << endl;
       }
    }

   if(isNone)
     cout << "None" << endl;

    delete[] donationInfs;
}

void test68()
{
    std::ifstream infile;
    infile.open("./abc.txt");

    long charCount = 0;
    while(infile.good())
    {
        char tempCh;
        infile >> tempCh;
        charCount ++;
    }

    if(infile.eof())
    {
        cout << "Eof" << endl;
        cout << "Total charactor count is: " << charCount << endl;
    }

    infile.close();
}

void test69()
{
    struct donation{
        std::string name;
        double donation;
    };

    std::ifstream infile;
    infile.open("./namelist");

    int index = 0;
    int donationCnt = 0;
    donation *donationInfos = nullptr;

    while(infile.good())
    {
        if(index == 0)
        {
            infile >> donationCnt;
            infile.get();
            donationInfos = new donation[donationCnt];
        }
        else
        {
            //std::string content;
           // getline(infile, content);
            if(index > donationCnt)
                break; 
            getline(infile, donationInfos[index -1].name);
            infile >> donationInfos[index -1].donation;
            infile.get();
        }

        index ++;
    }

    for(int i = 0;i < donationCnt; i++)
    {
        cout << donationInfos[i].name << endl;
        cout << donationInfos[i].donation << endl;
    }

    if(donationInfos != nullptr)
    {
        cout << "Delete memory!" << endl;
        delete[] donationInfos;
    }
}
