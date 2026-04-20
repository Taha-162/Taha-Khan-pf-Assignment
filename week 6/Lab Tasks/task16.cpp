#include <iostream>
using namespace std;

int main()
{
    char a[100];

    cout << "Enter a string: ";
    cin.getline(a, 100);

    cout << "something " << a;

    return 0;
}