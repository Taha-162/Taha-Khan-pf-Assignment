#include <iostream>
using namespace std;
main()
{
    int rows = 5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 5; j >= 6 - i; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}