#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number:";
    cin >> num;

    int arr[50];

    for (int i = 0; i < num; i++)
        cin >> arr[i];

    int max = arr[0];

    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Largest: " << max;
}