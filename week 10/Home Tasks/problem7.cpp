#include <iostream>
using namespace std;

float calculateBalance(float balance, int years)
{
    float interest = 0;

    if (balance < 10000)
    {
        interest = 5;
    }
    else if (balance >= 10000 && balance <= 50000)
    {
        interest = 7;
    }
    else if (balance > 50000)
    {
        interest = 10;
    }

    if (years >= 3)
    {
        interest = interest + 2;
    }

    balance = balance + (balance * interest / 100);
    return balance;
}

int main()
{
    float balance;
    int years;

    cout << "Enter Balance and years: ";
    cin >> balance;
    cin >> years;

    float updated = calculateBalance(balance, years);
    cout << "Updated Balance: " << updated;

    return 0;
}