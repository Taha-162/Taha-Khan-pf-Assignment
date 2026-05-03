#include <iostream>
using namespace std;
main()
{
    int x = 10;
    int *ptr = &x;
    cout << "Value of X:" << x << endl;
    cout << "Address of x:" << &x << endl;
    cout << "value of x:" << *ptr;
}