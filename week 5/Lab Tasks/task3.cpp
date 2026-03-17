#include <iostream>
using namespace std;
main()
{
    int n1 = 0, n2 = 1, next, n;
    cout << "Enter the number of Fibonacci series you want: ";
    cin >> n;
    cout << n1 << ",";
    cout << n2;
    for (int i = 1; i < n - 1; i = i + 1)
    {
        next = n1 + n2;
        cout << "," << next;
        n1 = n2;
        n2 = next;
    }
}