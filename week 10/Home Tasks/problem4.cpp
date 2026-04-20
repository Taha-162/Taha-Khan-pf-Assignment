#include <iostream>
#include <iomanip>
using namespace std;

float Taxcalculator(char type, float price);
string vehicle_name;

main()
{
    cout << "Enter the type of the vehicle (M/E/S/V/T) : ";
    char vehicle_type;
    cin >> vehicle_type;

    cout << "Enter the price of vehicle : ";
    float Price;
    cin >> Price;

    float Final_amount = Taxcalculator(vehicle_type, Price);

    cout << "The final price on vehicle of type " << vehicle_name << " after adding tax is $" << Final_amount;
}

float Taxcalculator(char type, float price)
{
    float tax;
    if (type == 'M')
    {
        price = price + (price * (6 / 100.0));
        vehicle_name = "Motorcycle";
        return price;
    }

    else if (type == 'E')
    {
        price = price + (price * (8 / 100.0));
        vehicle_name = "Electric";
        return price;
    }

    else if (type == 'S')
    {
        price = price + (price * (10 / 100.0));
        vehicle_name = "Sedan";
        return price;
    }

    else if (type == 'V')
    {
        price = price + (price * (12 / 100.0));
        vehicle_name = "Van";
        return price;
    }

    else if (type == 'T')
    {
        price = price + (price * (15 / 100.0));
        vehicle_name = "Truck";
        return price;
    }

    else
    {
        if (type == 'M' || type == 'E' || type == 'S' || type == 'V' || type == 'T')
        {
            cout << "Invalid input ";
        }
    }
}
