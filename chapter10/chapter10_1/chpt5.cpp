#include "chpt5.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

BankAccount::BankAccount()
{}

BankAccount::BankAccount(const char* accountNameParam, const std::string& accountParam
            , const double sumParam)
{
    std::strcpy(accountName, accountNameParam);
    account = accountParam;
    sum = sumParam;
}

void BankAccount::ShowAccount() const
{
    cout << "Account details are: " << endl;
    cout << this->accountName << endl;
    cout << this->account << endl;
    cout << this->sum << endl;
}

bool BankAccount::AddSum(double addSum)
{
    this->sum += addSum;
    return true;
}

bool BankAccount::TakeSum(double takeSum)
{
    if(this->sum < takeSum)
    {
        cout << "Has not enough money! " << endl;
        return false;
    }

    this->sum -= takeSum;
    return true;
}
