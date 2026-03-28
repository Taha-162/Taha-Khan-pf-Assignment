#include <iostream>
using namespace std;
main()
{
    int num;
    cout << "Enter the Numbers :";
    cin >> num;
    int elemnt[num];
    for (int i = 0; i < num; i++)
    {
        cout << " Enter the Element " << endl
             << i << " ";
        cin >> elemnt[i];
    }
    cout << "element :" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << elemnt[i] << " ";
    }
}