#include <iostream>
#include <iomanip>
using namespace std;

void poolstate(float V, float P1, float P2, float N);

main()
{
    cout << "Enter the capacity of water that pool can store : ";
    float V;
    cin >> V;

    cout << "Enter flow rate of P1 : ";
    float P1, P2, N;
    cin >> P1;

    cout << "Enter flow rate of P2 : ";
    cin >> P2;

    cout << "the hours that the worker is absent : ";
    cin >> N;

    poolstate(V, P1, P2, N);
}

void poolstate(float V, float P1, float P2, float N)
{
    float total_water = N * (P1 + P2);
    if (total_water <= V)
    {
        float per1 = (total_water / V) * 100;
        cout << "The pool is " << fixed << setprecision(0) << per1 << " %";

        cout << "\nPipe 1's contribution " << (P1 * N / total_water) * 100 << "% ";
        cout << "\nPipe 2's contribution " << (P2 * N / total_water) * 100 << "% ";
    }
    else
    {
        float overflow = total_water - V;
        cout << "For " << N << " hours, the pool overflows with " << overflow << " liters ";
    }
}