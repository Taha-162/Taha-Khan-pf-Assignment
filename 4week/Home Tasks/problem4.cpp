#include <iostream>
using namespace std;
main()
{
    float red_roses = 2.00;
    float white_roses = 4.10;
    float tulips = 2.50;
    float originalprice;
    float discountedprice;
    cout << "Red White : ";
    cin >> red_roses;
    cout << "White Roses : ";
    cin >> white_roses;
    cout << "Tulips : ";
    cin >> tulips;
    originalprice = (red_roses * 2.00) + (white_roses * 4.10) + (tulips * 2.50);
    cout << "Origional Price is " << originalprice;

    if (originalprice > 200)
    {
        discountedprice = originalprice - (originalprice * 0.2);
        cout << "Price after dicount is : " << discountedprice;
    }
    else
    {
        cout << originalprice << endl;
    }
}
