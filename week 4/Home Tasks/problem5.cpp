#include <iostream>
using namespace std;
main()
{
    int speed;
    cout << "speed :";
    cin >> speed;

    if (speed < 10)
    {
        cout << "slow : " << endl;
    }

    if (speed > 10)
        if (speed < 50)
        {
            cout << "average" << endl;
        }

    if (speed > 50)
        if (speed < 150)
        {
            cout << "fast" << endl;
        }

    if (speed > 150)
        if (speed < 1000)

        {
            cout << "ultra fast" << endl;
        }

    if (speed > 1000)
    {
        cout << "Extremely fast" << endl;
    }
}