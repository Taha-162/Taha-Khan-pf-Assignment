#include <iostream>
using namespace std;
main()
{
    while (true)
    {
        int choice, num1 = 0, num2 = 0, result = 0;
        cout << "---Simple Calculator---" << endl;
        cout << "1. Addition " << endl;
        cout << "2. Substration" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4 .Division" << endl;
        cout << "5. Clear Screen " << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Your Choice :";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter First Number :";
            cin >> num1;
            cout << "Enter Second Number:";
            cin >> num2;
            result = num1 + num2;
            cout << "Result :" << result << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter First Number :";
            cin >> num1;
            cout << "Enter Second Number:";
            cin >> num2;
            result = num1 - num2;
            cout << "Result :" << result << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter First Number :";
            cin >> num1;
            cout << "Enter Second Number:";
            cin >> num2;
            result = num1 * num2;
            cout << "Result :" << result << endl;
        }
        else if (choice == 4)
        {
            cout << "Enter First Number :";
            cin >> num1;
            cout << "Enter Second Number:";
            cin >> num2;
            result = num1 / num2;
            cout << "Result :" << result << endl;
        }
        else if (choice == 5)
        {
            cout << "Screen Cleared" << endl;
        }
        else if (choice == 6)
        {
            cout << "Exiting Calculator. Goodbye!" << endl;
        }
        else
        {
            cout << "Invalid Choice.Try Again." << endl;
        }
    }
}