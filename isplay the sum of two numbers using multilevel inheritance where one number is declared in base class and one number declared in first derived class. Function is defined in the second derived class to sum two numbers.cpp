s#include <iostream>
using namespace std;

class Base{
    protected:
    float a;
    public:
    Base(){
        a = 40.0;
    }
};
class Derived:public Base{
    protected:
    float b;
    public:
    Derived(){
        b = 1.5;
    }
};
class Derived2:public Derived{
    protected:
    float c;
    public:
    Derived2(){
        c = 1.2;
    }
};
class Derived3:public Derived2{
    public:
    void product(){
        cout << "The product is " << a*b*c;

    }
    };
int main() {
    Derived3 ob;
    ob.product();
    return 0;
}