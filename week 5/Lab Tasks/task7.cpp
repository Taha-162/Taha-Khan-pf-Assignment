#include <iostream>
using namespace std;
main()
{
    char alphabet = 'y';
    while (alphabet == 'y')
    {
        cout << "I Am Happy" << endl;
        cout << "Press Y to continue or press any key to exit " << endl;
        cin >> alphabet;
    }
    if (alphabet != 'y')
    {
        cout << "Exit" << endl;
    }
}