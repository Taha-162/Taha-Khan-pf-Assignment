#include <iostream>
using namespace std;
main()
{
    int value;
    cout << "Enter the Positive Number :";
    cin >> value;
    while (value <= 0)
    {
        cout << " Error " << value << " Is not the Positive number :" << endl;
        cout << "Please Enter the Positive number :";
        cin >> value;
    }
    cout << "The Program Ends" << endl;
}