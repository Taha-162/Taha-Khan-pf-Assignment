#include <iostream>
using namespace std;
main()
{
    int moneyx;
    int year;
    int age = 18;
    int totalmoney = 0;
    cout << "Enter The Inheritance Money you recieve :";
    cin >> moneyx;
    cout << "Enter The year you have to live in the past:";
    cin >> year;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            totalmoney = totalmoney + 12000;
        }
        else
        {
            totalmoney = totalmoney + 12000 + (50 * age);
        }
        age++;
    }
    if (totalmoney <= moneyx)
    {
        cout << "Yes!";
        cout << "HE will live carefree life will have " << moneyx - totalmoney << " Dollers left ";
    }
    else
    {
        cout << "He will need " << totalmoney - moneyx << " Dollers to survive :";
    }
}