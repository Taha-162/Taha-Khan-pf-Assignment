#include <iostream>
using namespace std;
main()
{
    char name[50];
    cout << "Enter The Name:";
    cin >> name;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'z')
        {
            name[i] = 'a';
        }
        else
        {
            name[i] = name[i] + 1;
        }
    }
    cout << name;
}