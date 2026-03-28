#include <iostream>
using namespace std;
int main()
{
    string name[100];
    int num;
    cout << "HOW MANY NAMES YOU WANNA GET? \t";
    cin >> num;
    cin.ignore();
    cout << "ENETR USER NAME:\n\n";
    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << ": NAME IS:";
        getline(cin, name[i]);
        cout << endl;
    }
    cout << "OUTPUT IS FROM HERE" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << ":YOUR NAME IS:" << name[i] << endl;
    }

    return 0;
}