#include <iostream>
using namespace std;
main()
{
    int num, number;
    float c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, p1, p2, p3, p4, p5;
    cout << "Enter the Number you want to count:";
    cin >> num;
    for (int i = 1; i <= num; i = i + 1)
    {
        cout << "Enter The Number :";
        cin >> number;
        if (number < 200)
        {
            c1 = c1 + 1;
            p1 = (c1 * 100.0) / num;
        }
        else if (number >= 200 && number < 400)
        {
            c2 = c2 + 1;
            p2 = (c2 * 100) / num;
        }
        else if (number >= 400 && number < 600)
        {
            c3 = c3 + 1;
            p3 = (c3 * 100) / num;
        }
        else if (number >= 600 && number < 800)
        {
            c4 = c4 + 1;
            p4 = (c4 * 100) / num;
        }
        else if (number >= 800)
        {
            c5 = c5 + 1;
            p5 = (c5 * 100) / num;
        }
    }
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
}