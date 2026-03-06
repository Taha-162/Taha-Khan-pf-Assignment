#include <iostream>
using namespace std;
main()
{
    string shape;
    float num, num1, num2;
    float pi = 3.14;
    ;
    cin >> shape;
    cin >> num1;
    if (shape == "Square")
    {
        num = num1 * num1;
        cout << num;
    }
    if (shape == "Rectangle")
    {
        cin >> num2;
        num = num1 * num2;
        cout << num;
    }
    if (shape == "Circle")
    {
        num = pi * num1 * num1;
        cout << num;
    }
    if (shape == "Triangle")
    {
        cin >> num2;
        num = (1 / 2.0) * num1 * num2;
        cout << num;
    }
}