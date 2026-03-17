#include <iostream>
using namespace std;
main()
{
    int n1 = 0, n2 = 1, length, next;
    cout << "Enter The Length of Fibonacci series :";
    cin >> length;
    cout << n1 << " ";
    cout << n2;
    for (int i = length; i < 10; i = i + 1)
    {
        next = n1 + n2;
        cout << " " << next;

        n1 = n2;
        n2 = next;
    }
}
