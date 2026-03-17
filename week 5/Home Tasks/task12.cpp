#include <iostream>
using namespace std;
main()
{
    while (true)
    {
        int choice;
        string book;
        cout << "---Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice :";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter Book Name :";
            cin >> book;
            cout << "You Added Book :" << book << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter Book Name :";
            cin >> book;
            cout << "You View Book :" << book << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter Book Name :";
            cin >> book;
            cout << "You Borrow Book :" << book << endl;
        }
        else if (choice == 4)
        {
            cout << "Enter Book Name :";
            cin >> book;
            cout << "You issue this Book :" << book << endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting: Thanx For Visiting Library. Goodbye!" << endl;
        }
        else
        {
            cout << "Invalid Choice. Try Again. Please! :)" << endl;
        }
    }
}