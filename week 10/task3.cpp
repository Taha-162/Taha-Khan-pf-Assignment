#include <iostream>
#include <cmath> //predefined  library
using namespace std;
main()
{
    int num1, num2;
    cout << "Enter The first Number:";
    cin >> num1;
    cout << "Enter The 2nd Number :";
    cin >> num2;
    cout << "Greatest Number is" << max(num1, num2); // predefined functions
    return 0;
}