#include <iostream>
using namespace std;
// function prototype
void add(int num1, int num2);
main()
{
    int num1, num2;
    cout << "enter the first no:";
    cin >> num1;
    cout << "Enter the 2nd no:";
    cin >> num2;
    add(num1, num2);
    return 0;
}
void add(int num1, int num2)
{
    cout << "sum:" << num1 + num2;
}