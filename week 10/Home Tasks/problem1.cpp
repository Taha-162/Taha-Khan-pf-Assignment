#include <iostream>
using namespace std;

int factorial(int x);

main()
{
  int a, b;
  cout << "Enter the Number : ";
  cin >> a;

  b = factorial(a);
  cout << "The Factorial is : " << b;
}

int factorial(int x)
{
  int fac = 0;
  for (x; x >= 1; x--)
  {
    fac += x;
  }
  return fac;
}