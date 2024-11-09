#include <iostream>
using namespace std;

class A; // Forward declaration
class B; // Forward declaration
class C; // Forward declaration

class Friend {
public:
    void showData(A& a, B& b, C& c); // Single function for all classes
};

class A {
private:
    int privateA = 10;
protected:
    int protectedA = 20;

    // Friend class declaration
    friend class Friend;
};

class B {
private:
    int privateB = 30;
protected:
    int protectedB = 40;

    // Friend class declaration
    friend class Friend;
};

class C {
private:
    int privateC = 50;
protected:
    int protectedC = 60;

    // Friend class declaration
    friend class Friend;
};

void Friend::showData(A& a, B& b, C& c) {
    cout << "Class A private data: " << a.privateA << ", protected data: " << a.protectedA << endl;
    cout << "Class B private data: " << b.privateB << ", protected data: " << b.protectedB << endl;
    cout << "Class C private data: " << c.privateC << ", protected data: " << c.protectedC << endl;
}

int main() {
    A a;
    B b;
    C c;
    Friend friendObj;
    friendObj.showData(a, b, c);
    return 0;
}
