#include <iostream>
using namespace std;
main()
{
    string capital, small;
    cout << "Enter the first name :";
    cin >> capital;
    cout << "Enter the 2nd name :";
    cin >> small;
    if (capital == small)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}