#include <iostream>
using namespace std;
string num_to_alphabets(int num)
{
    string tonine[] = {"", "one", "two", "three", "forth", "five", "six", "seven", "eight", "nine"};
    string totwenty[] = {"ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"};
    string tohundred[]{" ", " ", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
    if (num < 10)
    {
        return tonine[num];
    }
    else if (num >= 10 && num < 20)
    {
        return totwenty[num - 10];
    }
    else if (num >= 100)
    {
        return "invalid number";
    }
    int digit1 = num / 10;
    int digit2 = num % 10;
    if (digit2 == 0)
    {
        return tohundred[digit1];
    }
    return tohundred[digit1] + " " + tonine[digit2];
}
main()
{
    int alphabets;
    cout << "Enter The counting that will convert into Alphabets:";
    cin >> alphabets;
    cout << num_to_alphabets(alphabets);
    return 0;
}