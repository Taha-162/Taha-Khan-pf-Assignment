#include <iostream>
using namespace std;

int main()
{
    int arr1[2], arr2[50], num;

    cin >> arr1[0] >> arr1[1];

    cin >> num;

    for (int i = 0; i < num; i++)
        cin >> arr2[i];

    cout << arr1[0] << " ";

    for (int i = 0; i < num; i++)
        cout << arr2[i] << " ";

    cout << arr1[1];
}