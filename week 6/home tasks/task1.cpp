#include <iostream>
using namespace std;
int main()
{
    string name[50];
    int number;
    cout << "HOW MANY NAMES YOU WANNA PRINT:";
    cin >> number;
    char cha;
    int n = 0;
    cout << "ENTER THE CHARACTER TO CHECK IT:";
    cin >> cha;
    cin.ignore();
    for (int i = 0; i < number; i++)
    {
        cout << "YOUR " << i + 1 << " NAME IS:";
        getline(cin, name[i]);
        if (name[i][0] == cha)
        {
            n++;
        }
    }
    cout << "YOUR NAMES START WITH " << cha << " IS :" << n;

    return 0;
}