#include <iostream>
using namespace std;
main()
{
    int num1, num2;
    int gcd = 1;
    cout << "Enter The First Number :";
    cin >> num1;
    cout << "Enter The Second Number :";
    cin >> num2;
    for (int i = 1; i <= num1 && i <= num2; i = i + 1)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    int lcm = (num1 * num2) / gcd;
    cout << "The GCD/HCM of " << num1 << " and " << num2 << " is :" << gcd << "\n";
    cout << "The LCM of " << num1 << " and " << num2 << " is :" << lcm << "\n";
}