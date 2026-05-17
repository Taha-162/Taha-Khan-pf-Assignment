#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

const int totalproduct = 100;
int currentproduct = 0;
string namesarray[totalproduct];
int pricearray[totalproduct];
int stockarray[totalproduct];
int discountarray[totalproduct];

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
void savetofile(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct);
void loadfromfile(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int &currentproduct);

void savetofile(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int currentproduct)
{
    ofstream file;
    file.open("products.txt");
    for (int i = 0; i < currentproduct; i++)
    {
        if (namesarray[i] != " ")
        {
            file << namesarray[i] << "," << pricearray[i] << "," << stockarray[i] << "," << discountarray[i] << endl;
        }
    }
    file.close();
}

void loadfromfile(string namesarray[], int pricearray[], int stockarray[], int discountarray[], int &currentproduct)
{
    ifstream file;
    file.open("products.txt");
    if (!file)
    {
        ofstream newfile;
        newfile.open("products.txt");
        newfile << "medoralipstick,200,19,0" << endl;
        newfile << "pondsfacewash,300,12,0" << endl;
        newfile << "coverfoundation,650,9,0" << endl;
        newfile << "xqmbase,300,10,5" << endl;
        newfile << "hudabeautyprimer,250,5,10" << endl;
        newfile.close();
        file.open("products.txt");
    }
    currentproduct = 0;
    string line;
    while (getline(file, line))
    {
        string name = "";
        string price = "";
        string stock = "";
        string discount = "";
        int commacount = 0;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ',')
            {
                commacount++;
            }
            else
            {
                if (commacount == 0)
                    name += line[i];
                else if (commacount == 1)
                    price += line[i];
                else if (commacount == 2)
                    stock += line[i];
                else if (commacount == 3)
                    discount += line[i];
            }
        }
        namesarray[currentproduct] = name;
        pricearray[currentproduct] = stoi(price);
        stockarray[currentproduct] = stoi(stock);
        discountarray[currentproduct] = stoi(discount);
        currentproduct++;
    }
    file.close();
}

int main()
{
    loadfromfile(namesarray, pricearray, stockarray, discountarray, currentproduct);

    while (true)
    {
        system("cls");
        cout << endl;
        introheader();
        mainheader();

        string useroption;
        cin >> useroption;
        cout << "You choose a Option" << endl;

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

                        if (adminchoice == "1")
                        {
                            viewproducts(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue :)";
                            getch();
                        }
                        else if (adminchoice == "2")
                        {
                            addproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            savetofile(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue :)";
                            getch();
                        }
                        else if (adminchoice == "3")
                        {
                            updateproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            savetofile(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To contineu:";
                            getch();
                        }
                        else if (adminchoice == "4")
                        {
                            deleteproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            savetofile(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "5")
                        {
                            searchproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "6")
                        {
                            lowstockitem(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "7")
                        {
                            applydiscount(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            savetofile(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue:";
                            getch();
                        }
                        else if (adminchoice == "8")
                        {
                            totalitemvalue(namesarray, pricearray, stockarray, discountarray, currentproduct);
                            getch();
                            cout << "Press Any Key To Continue:";
                            getch();
                        }
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
        else if (useroption == "2")
        {
            while (true)
            {
                system("cls");
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

                if (userchoice == "1")
                {
                    viewproducts(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();
                    cout << "Press Any Key To Continue :)";
                    getch();
                }
                else if (userchoice == "2")
                {
                    buyproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    savetofile(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();
                }
                else if (userchoice == "3")
                {
                    searchproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();
                    cout << "Press Any Key To Continue:";
                    getch();
                }
                else if (userchoice == "4")
                {
                    checkproduct(namesarray, pricearray, stockarray, discountarray, currentproduct);
                    getch();
                    cout << "Press Any Key To Continue:";
                    getch();
                }
                else if (userchoice == "5")
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
            getch();
        }
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
    discountarray[currentproduct] = 0;
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
            float discountprice = pricearray[i] - (pricearray[i] * stockarray[i] / 100);
            cout << namesarray[i] << "\t price:Rps" << pricearray[i] << "\tDiscount:" << discountarray[i] << "%" << " new price after applying discount:" << discountprice << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No discount available right now sorry :(" << endl;
    }
}