#include<iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base() {
        num1 = 5;
        num2 = 4;
    }
};

class Derived : public Base {
public:
    void product() {
        cout << "Product of two numbers: " << num1 * num2 << endl;
    }
};

int main() {
    Derived obj;
    obj.product();
    return 0;
}s