#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to check if number is Strong
bool isStrong(int num) {
    int temp = num;
    int sum = 0;

    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + factorial(digit);
        temp = temp / 10;
    }

    if (sum == num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    cin >> number;

    if (isStrong(number)) {
        cout << "Strong Number";
    } else {
        cout << "Not Strong Number";
    }

    return 0;
}