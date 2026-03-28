#include <iostream>
using namespace std;
void even(int arr[], int size)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            num++;
        }
    }
    cout << "THE NUMBER OF EVEN NUMBERS ARE:" << num;
}
int main()
{
    cout << "Enter the quantity of numbers:";
    int quant;
    cin >> quant;
    int numbers[quant];
    for (int i = 0; i < quant; i++)
    {
        cout << "YOUR " << i + 1 << " NUMBER IS:";
        cin >> numbers[i];
    }
    even(numbers, quant);
    return 0;
}