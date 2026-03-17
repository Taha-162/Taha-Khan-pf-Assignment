#include <iostream>
using namespace std;
int main()
{
    int multiply;
    int table1 = 24, table2 = 50, table3 = 29;
    cout << "The Table of 24 is :" << endl;
    for (int i = 1; i <= 10; i = i + 1)
    {
        multiply = table1 * i;
        cout << table1 << "*" << i << "=" << multiply << endl;
    }
    cout << endl;

    cout << "The Table of 50 is :" << endl;
    for (int i = 1; i <= 10; i = i + 1)
    {
        multiply = table2 * i;
        cout << table2 << "*" << i << "=" << multiply << endl;
    }
    cout << endl;
    cout << "The Table of 29 is :" << endl;

    for (int i = 1; i <= 10; i = i + 1)
    {
        multiply = table3 * i;
        cout << table3 << "*" << i << "=" << multiply << endl;
    }
}