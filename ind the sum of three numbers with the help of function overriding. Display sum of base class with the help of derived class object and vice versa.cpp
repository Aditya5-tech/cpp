#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function for sum calculation
    virtual int sum(int a, int b, int c) {
        int sum_base = a + b + c;
        cout << "Sum in Base class: " << sum_base << endl;
        return sum_base;
    }
};

class Derived : public Base {
public:
    // Overriding function for sum calculation in derived class
    int sum(int a, int b, int c) override {
        int sum_derived = a + b + c;
        cout << "Sum in Derived class: " << sum_derived << endl;
        return sum_derived;
    }
};

int main() {
    Base base_obj;
    Derived derived_obj;

    // Creating a base class pointer and assigning derived object to it
    Base* ptr;

    // Calling sum of Base class using base object
    ptr = &base_obj;
    ptr->sum(5, 10, 15); // Calls Base class sum

    // Calling sum of Derived class using derived object
    ptr = &derived_obj;
    ptr->sum(5, 10, 15); // Calls Derived class sum

    return 0;
}
