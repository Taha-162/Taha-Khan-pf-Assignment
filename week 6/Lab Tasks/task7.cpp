#include <iostream>
using namespace std;
main()
{
    char string[50];
    cout << "Enter a String :";
    cin >> string;
    int length = 0;
    while (string[length] != '\0')
    {
        length = length + 1;
    }

    for (int i = length - 1; i >= 0; i--)
    {
        cout << string[i];
    }
    return 0;
}