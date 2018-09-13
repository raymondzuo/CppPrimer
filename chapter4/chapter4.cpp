#include <iostream>
#include <array>
#include <vector>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

void define();
void test();
void test1();
void test2();
void test3();

int main()
{
    //define();
    test3();
    return 0;
}


void define()
{
    //char actor[30];
    //short betsie[100];
    //float chuck[13];
    //long double dipsea[64];

    //std::array<char, 30> actor;
    //std::array<short, 100> betsie;
    //std::array<float, 13> chuck;
    //std::array<long double, 64> dipsea;
    
    int odd[5] = {1,3,5,7,9};
    int even = odd[0] + odd[4];

    std::array<int,5> odd1 = {1,3,5,7,9};
    int even1 = odd1.at(0) + odd1.at(odd1.size() -1);
    //cout << "odd sum is: " << even << endl;
    //cout << "odd sum is: " << even1 << endl;
    char str[13] = "cheeseburger";
    //cout << str << endl;
    //cout << str[12] ;

    struct Fish
    {
        std::string category;
        int weight;
        float length;
    };
    
    Fish myFish;
    myFish.category = "Bayu";
    myFish.weight = 3;
    myFish.length = 12.5;

    //cout << "My fish info: category: " << myFish.category << " weight: " << myFish.weight
    //<< " length: " << myFish.length;

    enum Response
    {
        No = 0,
        Yes,
        Maybe
    };
   
    double ted = 12;
    double *pTed = &ted;
    //cout << " ted: " << *pTed << endl;

    float treacle[10] = {1,2,3,4,5,6,7,8,9,0};
    float *pFirst = treacle;
    float *pLast = treacle + 9;

    //cout << "First: " << *pFirst << " Last: " << *pLast << endl;
    //cout << "Please input size of array: ";
    //int size;
    //cin >> size;
    //int *arr = new int[size];
    //arr[size - 1] = 100;
    //cout << "Last element: " << arr[size -1] << endl;
    //cout << std::hex;
    //cout << "2ndLast position: " << arr + size - 2 <<  " Last position: " << arr + size -1;
    //cout << "size of int: " << sizeof(int);
    //delete[] arr;
    //std::vector<int> *newVec = new std::vector<int>(size);
    //newVec->push_back(1);
    //cout << "Fist element is: " << newVec->at(0);
    //delete newVec;
    //cout << (int*) "Home of the jolly bytes";
    Fish *yourFish = new Fish;
    //cout << "Undefine behavior: " << yourFish->category << endl; 
    delete yourFish;

    const int VectorSize = 10;
    std::vector<std::string> vec(VectorSize);
    std::array<std::string,VectorSize> arrayOfStr;
    cout << "Vector size: " << vec.size() << " Array size: " << arrayOfStr.size() << endl;
}

void test()
{
    cout << "What is your first name?";
    std::string name;
    cin >> name;
    cin.get();
    cout << "What is your last name?";
    cin >> name;
}

void test1()//此处在超出输入数量时，无法输入lastname呢？？？？？
{
    const int MaxSize = 20;
    char firstName[MaxSize], lastName[MaxSize], name[43];
    cout << "Enter your first name:";
    cin.getline(firstName, MaxSize);
    cout << "Enter your last name:";
    cin.getline(lastName, MaxSize);
    strcpy(name, firstName);
    char splits[3] = ", ";
    strcat(name,splits);
    strcat(name, lastName);
    cout << "Here's the information in a single string:" << name;
}

void test2()
{
    std::string firstName, lastName, name;
    cout << "First name:";
    cin >> firstName;
    cout << "Second name: ";
    cin >> lastName;
    name = firstName + ", " + lastName;
    cout << "Here's the information in a single string:" << name;
}

void test3()
{
    struct CandyBar
    {
        std::string candyName;
        float candyWeight;
        int candyCalories;
    } snack
    {
       "Mocha Munch",
       2.3,
       350
    };

    cout << "Candy info, name: " << snack.candyName << " weight: " << snack.candyWeight
        << " calories:" << snack.candyCalories;
    CandyBar *candies = new CandyBar[3];
    for(size_t i = 0; i < 3; i++)
    {
        CandyBar *temp = candies + i;
        temp->candyName = "Candy" + std::to_string(i);
        temp->candyWeight = i;
        temp->candyCalories = 10 * i;
    }

    for(size_t j = 0;j < 3;j++)
    {
        cout << "Candy" << (j + 1) << " info, name is: " <<  candies[j].candyName
            << " weight: " << candies[j].candyWeight << " calories: " << candies[j].candyCalories;
        cout << endl;
    }

    delete[] candies;
}
