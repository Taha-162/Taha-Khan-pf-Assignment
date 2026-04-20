#include <iostream>
// execution ko stop krna ka lya sleep()function use hota ha or library #include <windows.h>
#include <windows.h>
using namespace std;
int main()
{
    while (true)
    {

        cout << "taha:"; // ab is execution ko rokna ka lya(matlab mili second sa chala ga) sleep ka function lagayain ga agr ye nahi lagata hamara pc ko samj nahi ati
        Sleep(200);        // game ma use hona hota ha
    }
    return 0;
}