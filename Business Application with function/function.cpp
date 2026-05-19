#include <iostream>
#include <conio.h>
using namespace std;

//....Prototype.....//
void introheader();
void mainheader();
void viewproducts(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void addproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int &currentproduct);
void updateproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void deleteproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void buyproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void searchproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void lowstockitem(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void applydiscount(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void totalitemvalue(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void checkproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void discoffers(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);

//...Prototype end here...//

int main()
{
    //..... variables..//
    const int totalproduct = 100;
    int currentproduct = 5;
    string namesarray[totalproduct] = {"medoralipstick", "pondsfacewash", "coverfoundation", "xqmbase", "hudabeautyprimer"};
    int pricearray[totalproduct] = {200, 300, 650, 300, 250};
    int stockarray[totalproduct] = {19, 12, 9, 10, 5};
    int discountarray[totalproduct] = {0, 0, 0, 5, 10};
    //... Main Header of CSMS...//
    while (true)
    {
        system("cls");
        cout << endl;
        introheader();
        mainheader();

        string useroption;
        cin >> useroption;
        cout << "You choose a Option" << endl;

        //......Admin Menu.....//
        if (useroption == "1")
        {
            cout << "Welcome to Admin Menu" << endl;
            for (int i = 0; i < 3; i++)
            {

                system("cls");
                cout << "Welcome to Admin Menu " << endl;
                string username;
                cout << "Enter The Username:";
                cin >> username;
                string password;
                cout << "Enter The Password:";
                cin >> password;
                if (username == "taha" && password == "7271")
                {
                    cout << "Login Succesfully" << endl;
                    cout << "Press Any Key to Continue" << endl;
                    getch();
                    while (true)
                    {
                        system("cls");
                        cout << "1.View Product" << endl;
                        cout << "2.Add Product" << endl;
                        cout << "3.Update Product" << endl;
                        cout << "4.Delete Product" << endl;
                        cout << "5.Search Product" << endl;
                        cout << "6.view low stock item" << endl;
                        cout << "7.Apply discount on product" << endl;
                        cout << "8.view total inventory value" << endl;
                        cout << "9.Logout" << endl;
                        cout << "Enter The Choice:";
                        string adminchoice;
                        cin >> adminchoice;

                        //.. View Produt..//
                        if (adminchoice == "1")
                        {

                            viewproducts(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();

                            cout << "Press Any Key To Continue :)";
                            getch();
                        }

                        else if (adminchoice == "2")
                        {
                            //.... Add Product...//
                            addproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue :)";
                            getch();
                        }

                        //.. update product..//
                        else if (adminchoice == "3")
                        {
                            updateproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);

                            getch();

                            cout << "Press Any Key To contineu:";
                            getch();
                        }

                        //.. Delete Product..//
                        else if (adminchoice == "4")
                        {
                            deleteproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();

                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "5")
                        // seach product..//
                        {
                            searchproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();

                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "6")
                        //..view low stock item in store..//
                        {
                            lowstockitem(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();

                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "7")
                        //..apply discount on product..//
                        {
                            applydiscount(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();

                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "8")
                        //... view total product inventory price in store..//
                        {
                            totalitemvalue(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();

                            cout << "Press Any Key To Continue:";
                            getch();
                        }

                        //..logout..//
                        else if (adminchoice == "9")
                        {

                            cout << "Logout" << endl;

                            break;
                        }
                        else
                        {
                            cout << "Invalid Choice:";
                        }
                    }
                    break;
                }
                else if (username != "taha" && password != "7271")
                {
                    cout << "Login Failed :-( plz Try Again" << endl;
                }

                getch();
            }
        }

        //-----Customer Menu-------
        else if (useroption == "2")
        {

            while (true)
            {
                system("cls");
                // User Code
                cout << "Welcome to customer menu" << endl;
                cout << "1.View Our Products :-)" << endl;
                cout << "2.Buy Our Products:-)" << endl;
                cout << "3.Search Product  :)" << endl;
                cout << "4.Check the product is in store :)" << endl;
                cout << "5.View discount offers" << endl;
                cout << "6.Logout :)" << endl;
                cout << "Please Select Option:";

                string userchoice;
                cin >> userchoice;
                cout << "You Choose Option" << endl;

                //....viewproduct..//
                if (userchoice == "1")
                {
                    viewproducts(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();
                    cout << "Press Any Key To Continue :)";
                    getch();
                }

                //.. buy code..//
                else if (userchoice == "2")
                {
                    buyproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();
                }
                else if (userchoice == "3")
                //...search product..//
                {
                    searchproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();

                    cout << "Press Any Key To Continue:";
                    getch();
                }
                else if (userchoice == "4")
                // check the product in stock of store..//
                {
                    checkproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();

                    cout << "Press Any Key To Continue:";
                    getch();
                }
                else if (userchoice == "5")
                //..View Discount offer..//
                {
                    discoffers(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();

                    cout << "Press Any Key To Continue:";
                    getch();
                }

                else if (userchoice == "6")
                {

                    cout << "Logout" << endl;

                    break;
                }
                else
                {
                    cout << "Invalid Choice:";
                }
            }

            getch(); // character lana ka lya function ya pichla output ko rokna
        }

        //..Logout..//

        else if (useroption == "3")
        {
            cout << "---Exiting---";
            break;
        }
        else
        {
            cout << "You Enter Invaid choice";
        }
        getch();

        cout << "Thanx For Using Our System :-)";
    }
}

//.. functions ko add krna..//
void introheader()
{
    cout << "------------------------------------------------------------------ " << endl;
    cout << "---------------Cosmetic Store Management System------------------" << endl;
    cout << "-----------------------------------------------------------------" << endl;
}
void mainheader()
{
    cout << "----User Menu----" << endl;
    cout << "1.Admin" << endl;
    cout << "2.users" << endl;
    cout << "3.Exit" << endl;
    cout << "Choose Option:" << endl;
}
void viewproducts(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    cout << "No\tProductname\tproductprice\tproductstock\tdiscountaproduct" << endl;
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] != " ")
        {
            cout << i + 1 << "\t" << namesarray[i] << "\t" << pricearray[i] << "\t" << stockarray[i] << "\t" << discountarray[i] << "%" << endl;
        }
    }
}
void addproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int &currentproduct)
{
    cout << "Enter Product Name You want to add:" << endl;
    cin >> namesarray[currentproduct];
    cout << "Enter The Price of The Product You Added:" << endl;
    cin >> pricearray[currentproduct];
    cout << "How many stocks U have of the Product You added:" << endl;
    cin >> stockarray[currentproduct];
    discountarray[currentproduct] = 0; // no discount currently on new product :(
    currentproduct++;
    cout << "Product Added successfully!\n";
}
void updateproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    string find;
    cout << "Enter THE Prodcut Name You want to Update:";

    cin >> find;
    bool found = false;
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] == find)
        {
            cout << "Product found:" << endl;
            ;
            cout << "Update The Price Of Product:";
            cin >> pricearray[i];
            cout << "Update The Stock of Product:";
            cin >> stockarray[i];
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "This Product is not on list";
    }
}
void deleteproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    string name;
    cout << "Enter The Product Name U want To Delete:";
    cin >> name;
    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] == name)
        {
            foundindex = i;
            found = true;
        }
    }
    if (found == true)
    {
        namesarray[foundindex] = " ";
        pricearray[foundindex] = 0;
        stockarray[foundindex] = 0;
        discountarray[foundindex] = 0;
        cout << "Record Of Product" << name << "is Deleted" << endl;
    }
    else
    {
        cout << "The Product you Search is not found :(";
    }
}
void buyproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    string productname;
    int quantity;
    int totalbill = 0;
    bool found = false;
    cout << "Enter The Product Name U want to Buy:";
    cin >> productname;
    cout << "Enter The quantity of Product u want to Buy:";
    cin >> quantity;
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] == productname)
        {
            found = true;
            if (stockarray[i] >= quantity)
            {
                stockarray[i] -= quantity;
                totalbill = totalbill + pricearray[i] * quantity;

                // ok I will give u discount if u buy product worth 1500 or more:P
                if (totalbill >= 1500)
                {
                    float discount = totalbill * 0.05;
                    totalbill = totalbill - discount;

                    cout << "5 discound Apply";
                }
                cout << "Purchase Successful" << endl;
                cout << "Your Total Bill is " << totalbill << endl;
                cout << "thanx for doing shopping from our store :) " << endl;
                cout << "visit again !" << endl;
            }
            else
            {
                cout << "Not Enough Stock plz come tommorow :)";
            }
            break;
        }
    }
    if (!found)
    {
        cout << "Product Not Found :";
    }
}
void searchproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    string name;
    cout << "Enter the Product name u want to search :):" << endl;
    cin >> name;
    bool found = false;
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] == name)
        {
            cout << "Product found :)" << endl;
            cout << "Name:" << namesarray[i] << "\t" << "Price:" << pricearray[i] << "\t" << "Stock:" << stockarray[i] << "\t" << "Discount:" << discountarray[i] << "%" << endl;
        }
    }
}
void lowstockitem(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    cout << "View low stock item in store less then 7 product:" << endl;
    bool found = false;
    for (int i = 0; i < currentproduct; i++)
    {
        if (stockarray[i] < 7)
        {
            cout << namesarray[i] << " stock: " << stockarray[i] << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "Have more product stock in Store :D" << endl;
    }
}
void applydiscount(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    string name;
    cout << "Enter the product on which u want to apply discount :):" << endl;
    cin >> name;
    bool found = false;

    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] == name)
        {
            cout << "Enter how much discount u want to apply: 1 for 1% :" << endl;
            // if u press 1 then 1 percant discount will be apply

            cin >> discountarray[i];
            cout << "Discount apply successfully :D " << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Product not found try again :-(" << endl;
    }
}
void totalitemvalue(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    cout << " Check Total value of store's product:" << endl;
    int total = 0;
    for (int i = 0; i < currentproduct; i++)
    {
        int totalprice = pricearray[i] * stockarray[i];
        cout << namesarray[i] << ":Rps" << totalprice << endl;
        total += totalprice;
    }
    cout << "total value of store's product is :" << "Rps" << total << endl;
}
void checkproduct(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    string name;
    cout << "Enter the product name u want to see in stock:" << endl;
    cin >> name;
    bool found = false;
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] == name)
        {
            if (stockarray[i] > 0)
            {
                cout << name << "is in stock \t" << stockarray[i] << endl;
            }
            else
            {
                cout << name << "is not in store's stock \t" << stockarray[i] << endl;
            }
            found = true;
        }
    }

    if (!found)
    {
        cout << "Product not found try again :-)" << endl;
    }
}
void discoffers(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    cout << "View Discount offer :D" << endl;
    bool found = false;
    for (int i = 0; i < currentproduct; i++)
    {
        if (discountarray[i] > 0)
        {
            float discountprice = pricearray[i] - (pricearray[i] * discountarray[i] / 100);
            cout << namesarray[i] << "\t price:Rps" << pricearray[i] << "\tDiscount:" << discountarray[i] << "%" << " new price after applying discount:" << discountprice << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No discount available right now sorry :(" << endl;
    }
}
