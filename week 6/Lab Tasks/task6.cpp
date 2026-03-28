#include <iostream>
using namespace std;
main()
{
    char word[100];
    cout << "Enter The Word :";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        cout << word[i] << " At Position " << i << endl;
    }
}