#include <iostream>
using namespace std;
main()
{
    string username, password;
    string studentname = "";
    int choice;
    int studentage = 0;
    string coursename = "";
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter The Username:";
        cin >> username;
        cout << "Enter The Password :";
        cin >> password;
        if (username == "admin" && password == "1234")
        {
            cout << "Login Successful";
            break;
        }
        else
        {
            cout << "Login Failed" << endl;
        }
        if (i == 3 && !(username == "admin" && password == "1234"))
        {
            cout << "Too many attempts. Program End" << endl;

            return 0;
                }
    }
    for (int i = 1; i <= 5; i++)
    {
        cout << endl
             << "--- University Management System ----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Student" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice :";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter Student Name :";
            cin >> studentname;
            cout << "Enter The Student Age :";
            cin >> studentage;
            cout << "Student Added Successfully!" << endl;
        }
        else if (choice == 2)
        {
            if (studentname != "")
            {

                cout << "Student Name:" << studentname << endl;
                cout << "Student Age:" << studentage << endl;
            }

            else
            {
                cout << "No student Found of this Name:" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Add Your Course :";
            cin >> coursename;
            cout << endl
                 << "Your Course Added Successfully!" << endl;
        }
        else if (choice == 4)
        {
            cout << "Exit!" << endl;
            break;
        }
        else
        {
            cout << "Choice Invalid";
        }
    }
}