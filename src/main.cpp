#include <iostream>
#include <vector>
#include <string>

class Wallet
{
protected:
    double balance;

public:
    bool addIncome(double amount)
    {
        if (amount <= 0)
        {
            return false;
        }
        balance += amount;
        return true;
    };
    bool addExpanse(double amountE)
    {
        if (amountE <= 0)
        {
            return false;
        }
        balance -= amountE;
        return true;
    };

    double viewCurrentBalance()
    {
        return balance;
    };

    // bool saveTransactionToFile() {};

    // bool loadData() {};

    Wallet(double initialBalance)
    {
        balance = initialBalance;
    }
};

int main()
{
    Wallet person1(0);
    std::cout << person1.addIncome(1000) << std::endl;
    std::cout << person1.addExpanse(1000) << std::endl;
    std::cout << person1.viewCurrentBalance() << std::endl;

    return 0;
}