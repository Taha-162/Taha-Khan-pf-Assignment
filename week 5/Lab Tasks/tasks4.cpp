#include <iostream>
using namespace std;
main()
{
    int n, totaldig = 0;
    cout << "Enter The Number :";
    cin >> n;
    for (int i = n; i > 0; i = i / 10)

    {
        totaldig = totaldig + 1;
        cout << "Total Number of Digits :" << totaldig;
    }
}