#include <iostream>
using namespace std;
main()
{
    int x = 5;
    int *y = &x;
    cout << "valiue of this integer" << *(y)<<endl;
    cout << "adress of this variable" << y<<endl;
    x = 10; // update{}
    cout << "value of this integer" << *(y)<<endl;
}