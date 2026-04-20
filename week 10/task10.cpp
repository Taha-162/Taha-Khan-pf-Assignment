#include <iostream>
using namespace std;
string checksymetrical(int num1)
{
    int input = num1, reverse = 0;
    while (num1 != 0)
    {
        int digit = num1 % 10;
        reverse = reverse * 10 + digit;
        num1 = num1 / 10;
    }
    bool issymetrical = false;
    if (input == reverse)
    {
        issymetrical = true;
        return "This is Symetrical";
    }
    else
    {
        issymetrical = false;
        return "This is not symetrical";
    }
}
main()
{
    int numb1;
    cout << "Enter The Number:";
    cin >> numb1;
    cout << checksymetrical(numb1);
    return 0;
}