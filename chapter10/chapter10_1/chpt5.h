#ifndef CHPT_5_H
#define CHPT_5_H

#include <string>

class BankAccount
{
public:
    BankAccount();
    BankAccount(const char* accountNameParam, const std::string& accountParam,
                const double sumParam);

    void ShowAccount() const;
    bool AddSum(double addSum);//存款
    bool TakeSum(double takeSum);//取款
private:
    enum {SIZE = 50};
    char accountName[SIZE];
    std::string account;
    double sum;
};

#endif
