#include <iostream>
using namespace std;
main()
{
    string country;
    int ticket_price, discount;
    cout << "Enter the country : ";
    cin >> country;
    cout << "Enter the ticket price : ";
    cin >> ticket_price;

    if (country == "ireland")
    {
        discount = ticket_price * 0.10;
        ticket_price = ticket_price - discount;
        cout << "ticket price is : " << ticket_price << endl;
    }

    if (country != "ireland")
    {
        discount = ticket_price * 0.05;
        ticket_price = ticket_price - discount;
        cout << "ticket price is : " << ticket_price << endl;
    }
}