#include <iostream>
#include <iomanip>
using namespace std;

void projectTimecalculation(float hours, float days, float workers);

main()
{
    cout << "Enter the no. of needed hours [0-200000] : ";
    float hours;
    cin >> hours;

    cout << "Enter the days that firm has to complete the project : ";
    float days;
    cin >> days;

    cout << "Enter the no of workers : ";
    float workers;
    cin >> workers;

    projectTimecalculation(hours, days, workers);
}

void projectTimecalculation(float hours, float days, float workers)
{
    float actual_days = days - (days * (10 / 100.0));
    float time_project_will_take = (actual_days * 10) * workers;

    if (time_project_will_take >= hours)
    {
        cout << "Yes! " << fixed << setprecision(0) << time_project_will_take - hours << " hours left . ";
    }
    else
    {
        cout << "Not enough time! " << fixed << setprecision(0) << hours - time_project_will_take << " hours needed . ";
    }
}