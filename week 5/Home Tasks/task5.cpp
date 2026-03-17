#include <iostream>
using namespace std;
main()
{
    int number, sum = 0;
    cout << "Enter The Number :";
    cin >> number;
    while (number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    cout << "The digits's sum is :" << sum;
}
