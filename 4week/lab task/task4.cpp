#include <iostream>
using namespace std;
main()
{
    int pass1, pass2;
    pass2 = 1786;
    cout << "Enter the user password :";
    cin >> pass1;

    if (pass1 == pass2)
    {
        cout << "You crack the password";
    }
    if (pass1 != pass2)
    {
        cout << "you cannot crack the password";
    }
}