#include <iostream>
using namespace std;
main()
{
    int multiply, table;
    cout << "Enter the Number of Table You want to print :";
    cin >> table;
    for (int i = 1; i <= 10; i = i + 1)
    {
        multiply = table * i;
        cout << table << "*" << i << "=" << multiply << endl;
    }
}