#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number:";
    cin >> num;

    string arr[50];

    for (int i = 0; i < num; i++)
        cin >> arr[i];

    for (int i = 0; i < num; i++)
    {
        int len = arr[i].length();

        if (arr[i][len - 1] != '7')
            arr[i] += '7';

        cout << arr[i] << " ";
    }
}