#include <iostream>
using namespace std;
main()
{
    int num;
    int digit = 0;
    cout << "Enter The Number :";
    cin >> num;
    for (int i = num; i != 0; i = i / 10)
    {
        digit = digit + 1;
    }
    cout << "Total Number of Digits :" << digit;
}