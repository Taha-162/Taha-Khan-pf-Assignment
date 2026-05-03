#include <iostream>
#include <conio.h>
using namespace std;

//..... Data Structure.....//
const int totalproduct = 100;
int currentproduct = 5;
string namesarray[totalproduct] = {"medoralipstick", "pondsfacewash", "coverfoundation", "xqmbase", "hudabeautyprimer"};
int pricearray[totalproduct] = {200, 300, 650, 300, 250};
int stockarray[totalproduct] = {19, 12, 9, 10, 5};

//.... Data Structure is end.....//

//....Prototype.....//
void introheader();
void mainheader();
void viewproducts(string namesarray[], int pricearray[], int stockarray[], int currentproduct);
void addproduct(string namesarray[], int pricearray[], int stockarray[], int &currentproduct);
void updateproduct(string namesarray[], int pricearray[], int stockarray[], int currentproduct);
void deleteproduct(string namesarray[], int pricearray[], int stockarray[], int currentproduct);
void buyproduct(string namesarray[], int pricearray[], int stockarray[], int currentproduct);
//...Prototype end here...//

int main()
{
    //... Main Header of CSMS...//
    while (true)
    {
        system("cls");
        cout << endl;
        introheader();
        mainheader();

        int useroption;
        cin >> useroption;
        cout << "You choose a Option" << endl;

        //......Admin Menu.....//
        if (useroption == 1)
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
                if (username == "admin" && password == "1234")
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
                        cout << "5.logout" << endl;
                        cout << "Enter The Choice:";
                        int adminchoice;
                        cin >> adminchoice;

                        //.. View Produt..//
                        if (adminchoice == 1)
                        {

                            viewproducts(namesarray, pricearray, stockarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue :)";
                            getch();
                        }

                        else if (adminchoice == 2)
                        {
                            //.... Add Product...//
                            addproduct(namesarray, pricearray, stockarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue :)";
                            getch();
                        }

                        //.. update product..//
                        else if (adminchoice == 3)
                        {
                            updateproduct(namesarray, pricearray, stockarray, currentproduct);

                            getch();

                            cout << "Press Any Key To contineu:";
                            getch();
                        }

                        //.. Delete Product..//
                        else if (adminchoice == 4)
                        {
                            deleteproduct(namesarray, pricearray, stockarray, currentproduct);
                            getch();

                            cout << "Press Any Key To Continue:";
                            getch();
                        }

                        //..logout..//
                        else if (adminchoice == 5)
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
                else if (username != "admin" && password != "1234")
                {
                    cout << "Login Failed :-( plz Try Again" << endl;
                }

                getch();
            }
        }

        //-----Customer Menu-------
        else if (useroption == 2)
        {

            while (true)
            {
                system("cls");
                // User Code
                cout << "Welcome to customer menu" << endl;
                cout << "1.View Our Products :-)" << endl;
                cout << "2.Buy Our Products:-)" << endl;
                cout << "3.Logout :)" << endl;
                cout << "Please Select Option:";

                int userchoice;
                cin >> userchoice;
                cout << "You Choose Option" << endl;

                //....viewproduct..//
                if (userchoice == 1)
                {
                    viewproducts(namesarray, pricearray, stockarray, currentproduct);
                    getch();
                    cout << "Press Any Key To Continue :)";
                    getch();
                }

                //.. buy code..//
                else if (userchoice == 2)
                {
                    buyproduct(namesarray, pricearray, stockarray, currentproduct);
                    getch();
                }
                else if (userchoice == 3)
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

        else if (useroption == 3)
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
void viewproducts(string namesarray[], int pricearray[], int stockarray[], int currentproduct)
{
    cout << "No\tProductname\tproductprice\tproductstock" << endl;
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] != " ")
        {
            cout << i << "\t" << namesarray[i] << "\t" << pricearray[i] << "\t" << stockarray[i] << endl;
        }
    }
}
void addproduct(string namesarray[], int pricearray[], int stockarray[], int &currentproduct)
{
    cout << "Enter Product Name You want to add:" << endl;
    cin >> namesarray[currentproduct];
    cout << "Enter The Price of The Product You Added:" << endl;
    cin >> pricearray[currentproduct];
    cout << "How many stocks U have of the Product You added:" << endl;
    cin >> stockarray[currentproduct];
    currentproduct++;
    cout << "Product Added successfully!\n";
}
void updateproduct(string namesarray[], int pricearray[], int stockarray[], int currentproduct)
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
void deleteproduct(string namesarray[], int pricearray[], int stockarray[], int currentproduct)
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
        cout << "Record Of Product" << name << "is Deleted" << endl;
    }
    else
    {
        cout << "The Product you Search is not found :(";
    }
}
void buyproduct(string namesarray[], int pricearray[], int stockarray[], int currentproduct)
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