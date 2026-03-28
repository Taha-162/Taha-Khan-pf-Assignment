#include <iostream>
using namespace std;

void min_max(int numbers[], int quantity)
{
    int smallest = numbers[0];
    int largest = numbers[0];

    for (int i = 1; i < quantity; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    cout << "YOUR SMALLEST NUMBER IS: " << smallest << endl;
    cout << "YOUR LARGEST NUMBER IS: " << largest;
}

int main()
{
    cout << "Enter the quantity of numbers: ";
    int quantity;
    cin >> quantity;

    int numbers[quantity];

    for (int i = 0; i < quantity; i++)
    {
        cout << "YOUR " << i + 1 << " NUMBER IS: ";
        cin >> numbers[i];
    }

    min_max(numbers, quantity);

    return 0;
}