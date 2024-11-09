#include <iostream>
using namespace std;

// Function to add two numbers
int sum(int a, int b) {
    return a + b;
}

// Function to add three numbers
int sum(int a, int b, int c) {
    return a + b + c;
}

// Function to add four numbers
int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15, num4 = 20;

    // Calling sum function for two numbers
    cout << "Sum of two numbers: " << sum(num1, num2) << endl;

    // Calling sum function for three numbers
    cout << "Sum of three numbers: " << sum(num1, num2, num3) << endl;

    // Calling sum function for four numbers
    cout << "Sum of four numbers: " << sum(num1, num2, num3, num4) << endl;

    return 0;
}
