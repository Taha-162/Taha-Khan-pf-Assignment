#include <iostream>
#include <cmath>
using namespace std;
main()
{
    // float iota=sqrt(-1);//agr test casses ma direct casses ma i ki value find krna ka bolta to use krna tha
    int i;
    int a, b, c, d = 2;
    float root1, root2;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter The value of b:";
    cin >> b;
    cout << "Enter The value of c:";
    cin >> c;
    float determ;
    determ = pow(b, d) - 4 * a * c;
    if (determ == 0)
    {
        // root1=root2
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
    }
    else if (determ > 0)
    {
        root1 = (-b + sqrt(determ)) / (2 * a);
        root2 = (-b - sqrt(determ)) / (2 * a);
    }
    else if (determ < 0)
    {
        root1 = (-b / 2 * a) + (i * sqrt(determ)) / (2 * a);
        root2 = (-b / 2 * a) - (i * sqrt(determ)) / (2 * a);
    }
    cout << " x1=:" << root1 << endl;
    cout << " x2=:" << root2;
    return 0;
}