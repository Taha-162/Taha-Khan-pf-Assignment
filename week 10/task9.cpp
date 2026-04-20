#include <iostream>
using namespace std;
string alphabetscheck(char alph)
{
    if (alph >= 'A' && alph <= 'Z')
    {
        return "You have Enter Capital Alphabets";
    }
    else if (alph >= 'a' && alph <= 'z')
    {
        return "You have Enter Small Alphabets";
    }
    else
    {
        return "This is not a Alphabets";
    }
}
main()
{
    char alphabets;
    cout << "Enter The Character Your want to check weither is small or capital:";
    cin >> alphabets;
    cout << alphabetscheck(alphabets);
    return 0;
}
