#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num1, num2;
    cout << "Enter The first Number:";
    cin >> num1;
    cout << "Enter The 2nd Number: ";
    cin >> num2;
    cout << num1 << "Raise to power" << num2 << " is " << pow(num1, num2);
    return 0;
}