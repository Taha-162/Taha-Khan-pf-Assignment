#include <iostream>
using namespace std;
main()
{
    int ageN;
    int toyp;
    int washingx;
    int toys = 0;
    int dollers = 0;
    int money = 0;
    cout << "Enter the Lilly's Age :";
    cin >> ageN;
    cout << "Enter The Washing Machine Price :";
    cin >> washingx;
    cout << "Enter The price of each Toy:";
    cin >> toyp;
    for (int i = 1; i <= ageN; i = i + 1)
    {
        if (i % 2 == 0)
        {
            dollers = dollers + 10;
            money = money + dollers - 1;
        }
        else
        {
            toys = toys + 1;
        }
    }
    money = money + (toys * toyp);
    if (money >= washingx)
    {
        cout << "yes!" << endl;
        cout << money - washingx;
    }
    else
    {
        cout << "No!" << endl;
        cout << washingx - money;
    }
}