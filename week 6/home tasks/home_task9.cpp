#include <iostream>
#include <string>
using namespace std;
int main() {
    string books[100]; 
    int totalBooks = 0;
    int choice;
    while (true) {
        cout << "\n--- Library Management System ---" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            if (totalBooks < 100) {
                cout << "Enter the name of the book: ";
                cin.ignore(); // Clears the input buffer
                getline(cin, books[totalBooks]);
                totalBooks = totalBooks + 1;
                cout << "Book added successfully!" << endl;
            }
            if (totalBooks >= 100) {
                cout << "Library is full!" << endl;
            }
        }
        if (choice == 2) {
            if (totalBooks == 0) {
                cout << "No books available in the library." << endl;
            }
            if (totalBooks > 0) {
                cout << "\nList of Available Books:" << endl;
                int i = 0;
                while (i < totalBooks) {
                    cout << i + 1 << ". " << books[i] << endl;
                    i = i + 1;
                }
            }
        }
        if (choice == 3) {
            if (totalBooks == 0) {
                cout << "The library is empty. Nothing to borrow." << endl;
            }
            if (totalBooks > 0) {
                string bookToBorrow;
                cout << "Enter the name of the book you want to borrow: ";
                cin.ignore();
                getline(cin, bookToBorrow);
                cout << "You have borrowed: " << bookToBorrow << endl;
            }
        }
        if (choice == 4) {
            cout << "Exiting the program. Goodbye!" << endl;
            break; 
        }
        if (choice < 1) {
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
        if (choice > 4) {
           cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    }
    return 0;
}