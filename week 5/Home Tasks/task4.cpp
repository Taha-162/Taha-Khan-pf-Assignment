#include <iostream>
using namespace std;
main()
{
    int number, digit, frequency = 0;
    cout << "Enter The Number :";
    cin >> number;
    cout << "Enter The Digit :";
    cin >> digit;
    for (int i = number; i != 0; i = i / 10)
    {
        if (i % 10 == digit)
        {
            frequency = frequency + 1;
        }
    }
    cout << "Frequency :" << frequency;
}