#include <iostream>
using namespace std;
main()
{
    string pin;
    int balance = 100000;
    int choice;
    int depositmoney, withdrawmoney;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter The Pin :";
        cin >> pin;
        if (pin == "1234")
        {
            cout << "Your Transaction is being Processed :)" << endl;
            cout << "Login Successful" << endl;
            break;
        }
        else
        {
            cout << "Login failed" << endl;
        }
        if (i == 3 && !(pin == "1234"))
        {
            cout << "Your Transaction is being Processed :)" << endl;
            cout << "Attempt failed Your Account is Freeze :P" << endl;
            return 0;
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << endl
             << "---ATM Pin Menu---" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice:";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Your Transaction is being Processed :)" << endl;
            cout << "Your Current Balance is :" << balance << endl;
        }
        else if (choice == 2)
        {
            cout << "Your Transaction is being Processed :)" << endl;
            cout << "Enter The Money You Want To Deposit:";
            cin >> depositmoney;
            balance = balance + depositmoney;
            cout << "Your Transaction is being Processed :)" << endl;
            cout << "Your Total Balance is:" << balance << endl;
        }
        else if (choice == 3)
        {
            cout << "Your Transaction is being Processed :)" << endl;
            cout << "Enter The Money You Want To Withdraw:";
            cin >> withdrawmoney;
            if (withdrawmoney <= balance)
            {
                balance = balance - withdrawmoney;
                cout << "Your Transaction is being Processed :)" << endl;
                cout << "Your Total Balance is :" << balance;
            }
            else
            {
                cout << "Insufficiant Balance :(";
            }
        }
        else if (choice == 4)
        {
            cout << "Exit :";

            return 0;
        }
    }
}
