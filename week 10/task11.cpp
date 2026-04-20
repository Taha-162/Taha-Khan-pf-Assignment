#include <iostream>
using namespace std;
int sum(int num)
{
    int sum2 = 0;
    while (num != 0)
    {

        int letters = num % 10;
        sum2 = sum2 + letters;
        num = num / 10;
    }
    return sum2;
}
string checkevenodd(int num)
{
    int sum3 = sum(num);
    if (sum3 % 2 == 0)
    {
        return "It is evenish";
    }
    else
    {
        return "it is oddish";
    }
}
main()
{
    int number;
    cout << "Enter The Five Digit Numbers:";
    cin >> number;
    cout << checkevenodd(number);
    return 0;
}
