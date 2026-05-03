#include <iostream>
using namespace std;
main()
{
    int x = 10;
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        cout << "value is" << i << (ptr + i) << endl;
    }
}
