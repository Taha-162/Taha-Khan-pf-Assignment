#include <iostream>
using namespace std;
main()
{
    int temp1;
    int temp2;
    cout << "Enter the  temperature city 1 : ";
    cin >> temp1;
    cout << "Enter the  temperature city 2 : ";
    cin >> temp2;
    if (temp1 - temp2 > 10)
    {
        cout << "difference is too Big" << endl;
    }
    else
    {
        cout << "Program End" << endl;
    }
}