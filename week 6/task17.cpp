#include <iostream>
using namespace std;

int main()
{
    int arr[4];
    float total_due;

    cout << "Enter number of quarters, dimes, nickels, pennies:\n";
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter total amount to pay: ";
    cin >> total_due;

    float money = arr[0] * 0.25 +
                  arr[1] * 0.10 +
                  arr[2] * 0.05 +
                  arr[3] * 0.01;

    if (money >= total_due)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}