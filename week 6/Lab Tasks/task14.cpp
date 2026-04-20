#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number:";
    cin >> num;

    int arr[50];
    bool special = true;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];

        if (i % 2 == 0 && arr[i] % 2 != 0)
            special = false;

        if (i % 2 != 0 && arr[i] % 2 == 0)
            special = false;
    }

    if (special)
        cout << "This Array is Special";
    else
        cout << "This Array is not special";
}