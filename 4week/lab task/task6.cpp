#include <iostream>
using namespace std;
main()
{
    int salary_month = 10000;
    int price_lap = 50000;
    int advance, months;
    advance = salary_month * (5 / 100.0) * 6;
    if (advance >= salary_month * 0.5)
    {
        cout << "you can buy laptop";
    }
    if (advance < salary_month * 0.5)
    {
        months = price_lap / (salary_month * 0.5);
        cout << "Months required to buy laptop:" << months;
    }
}