#include <iostream>
using namespace std;
main()
{
    int bill, discount;
    cout << "Enter the Bill : ";
    cin >> bill;
    if (bill <= 5000)

    {
        discount = bill * 0.5;
        cout << "the discounted bill is:" << discount;
    }
    if (bill > 5000)

    {
        discount = bill * 0.10;
        cout << "the discount bill is " << discount;
    }
}