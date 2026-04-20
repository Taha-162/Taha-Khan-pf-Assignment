#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter The Number:";
    cin >> num;

    float arr[50], sum = 0;

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum;
}