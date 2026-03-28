#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter The Number:";
    cin >> n;

    int arr[50];

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        bool found = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == num)
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "Already Entered\n";

        arr[i] = num;
    }
}