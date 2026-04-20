#include <iostream>
using namespace std;
void checktime(int hour, int minutes);
main()
{
    int hours, minutes;
    cout << "Enter the Hours:";
    cin >> hours;
    cout << "Enter the minutes:";
    cin >> minutes;
    checktime(hours, minutes);
}
void checktime(int hour, int minutes)
{
    minutes = minutes + 15;
    if (minutes > 60)
    {
        minutes = minutes - 60;
        hour++;
    }
    if (hour > 24)
    {
        hour = hour - 24;
    }
    cout << hour << ":" << minutes;
}