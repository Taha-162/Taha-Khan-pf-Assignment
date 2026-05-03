#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalproduct = 100;
    int currentproduct = 5;

    // Data Structure
    string namesarray[totalproduct] = {"medoralipstick", "pondsfacewash", "coverfoundation", "xqmbase", "hudabeautyprimer"};
    int pricearray[totalproduct] = {200, 300, 650, 300, 250};
    int stockarray[totalproduct] = {19, 12, 9, 10, 5};

    // Main Header of CSMS
    while (true)
    {
        system("cls");
        cout << endl;
        cout << "------------------------------------------------------------------ " << endl;
        cout << "---------------Cosmetic Store Management System------------------" << endl;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "User Menu" << endl;
        cout << "1.Admin" << endl;
        cout << "2.users" << endl;
        cout << "3.Exit" << endl;
        cout << "Choose Option:" << endl;
        int useroption;
        cin >> useroption;
        cout << "You choose a Option" << endl;
        if (useroption == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                // Admin menu
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
                        // View Produt
                        if (adminchoice == 1)
                        {

                            cout << "No\tProductname\tproductprice\tproductstock" << endl;
                            for (int i = 0; i < currentproduct; i++)
                            {
                                if (namesarray[i] != " ")
                                {
                                    cout << i << "\t" << namesarray[i] << "\t" << pricearray[i] << "\t" << stockarray[i] << endl;
                                }
                            }
                            getch();
                            cout << "Press Any Key To Continue :)";
                            getch();
                        }
                        else if (adminchoice == 2)
                        {
                            // Add Product
                            cout << "Enter Product Name You want to add:" << endl;
                            cin >> namesarray[currentproduct];
                            cout << "Enter The Price of The Product You Added:" << endl;
                            cin >> pricearray[currentproduct];
                            cout << "How many stocks U have of the Product You added:" << endl;
                            cin >> stockarray[currentproduct];
                            currentproduct++;
                            getch();
                            cout << "Press Any Key To Continue :)";
                            getch();
                        }
                        // update product
                        else if (adminchoice == 3)
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
                            getch();
                            if (!found)
                            {
                                cout << "This Product is not on list";
                            }
                            cout << "Press Any Key To contineu:";
                            getch();
                        }
                        // Delete Product
                        else if (adminchoice == 4)
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
                            getch();

                            cout << "Press Any Key To Continue:";
                            getch();
                        }
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

                if (userchoice == 1)
                {
                    cout << "No\tProductname\tproductprice\tproductstock" << endl;
                    for (int i = 0; i < currentproduct; i++)
                    {
                        cout << i << "\t" << namesarray[i] << "\t\t" << pricearray[i] << "\t\t" << stockarray[i] << endl;
                    }
                    cout << "Press Any Key To Continue :)";
                    getch();
                }
                // buy code
                else if (userchoice == 2)
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
                                    float discount = totalbill * 0.5;
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