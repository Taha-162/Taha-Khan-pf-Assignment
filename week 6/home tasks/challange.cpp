#include <iostream>
#include <string>
using namespace std;
int main() {
    string correctUser = "admin";
    string correctPass = "1234";
    string enteredUsernames[3]; 
    string enteredPassword;
    string studentNames[3];
    int studentAges[3];
    string courseNames[3];
    int studentCount = 0;
    int courseCount = 0;
    bool loginSuccess = false;
    for (int i = 0; i < 3; i++) {
        cout << "Enter Username: ";
        cin >> enteredUsernames[i];
        cout << "Enter Password: ";
        cin >> enteredPassword;
        if (enteredUsernames[i] == correctUser && enteredPassword == correctPass) {
            cout << "Login Successful!" << endl;
            loginSuccess = true;
            break;
        } else {
            cout << "Invalid credentials. Attempts left: " << (2 - i) << endl;
        }
    }
    if (loginSuccess) {
        int choice;
        while (true) {
            cout << "\n--- University Management System ---" << endl;
            cout << "1 -> Add Student\n2 -> View Students\n3 -> Add Course\n4 -> View Courses\n5 -> Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                if (studentCount < 3) {
                    cout << "Enter student name: ";
                    getline(cin,studentNames[studentCount]);
                    cout << "Enter student age: ";
                    cin >> studentAges[studentCount];
                    studentCount++;
                    cout << "Student added successfully!" << endl;
                } else {
                    cout << "Storage full! Cannot add more than 3 students." << endl;
                }
            } 
            else if (choice == 2) {
                cout << "\n--- Student List ---" << endl;
                for (int i = 0; i < studentCount; i++) {
                    cout << "Name: " << studentNames[i] << ", Age: " << studentAges[i] << endl;
                }
            } 
            else if (choice == 3) {
                if (courseCount < 3) {
                    cout << "Enter course name: ";
                    cin >> courseNames[courseCount];
                    courseCount++;
                    cout << "Course added successfully!" << endl;
                } else {
                    cout << "Storage full! Cannot add more than 3 courses." << endl;
                }
            } 
            else if (choice == 4) {
                cout << "\n--- Course List ---" << endl;
                for (int i = 0; i < courseCount; i++) {
                    cout << i + 1 << ". " << courseNames[i] << endl;
                }
            } 
            else if (choice == 5) {
                cout << "Terminating program..." << endl;
                break; 
            } 
            else {
                cout << "Invalid choice! Please try again." << endl;
            }
        }
    } else {
        cout << "Login Failed. Program Terminated." << endl;
    }

    return 0;
}