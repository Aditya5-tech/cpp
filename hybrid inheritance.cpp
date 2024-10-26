#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"Constructor of class A."<<endl;
        }
        void funcA(){
            cout<<"Function of class A."<<endl;
        }
};
class B : public A{
    public:
        B(){
            cout<<"Constructor of class B."<<endl;
        }
        void funcB(){
            cout<<"Function of class B."<<endl;
        }
};
class C : public A{
    public:
        C(){
            cout<<"Constructor of class C."<<endl;
        }
        void funcC(){
            cout<<"Function of class C."<<endl;
        }
};
class D : public A{
    public:
        D(){
            cout<<"Constructor of class D."<<endl;
        }
        void funcD(){
            cout<<"Function of class D."<<endl;
        }
};
class E : public B{
    public:
        E(){
            cout<<"Constructor of class E."<<endl;
        }
        void funcE(){
            cout<<"Function of class E."<<endl;
        }
};
int main(){
    A objA;
    B objB;
    C objC;
    D objD;
    E objE;
    objE.funcA();
    objE.funcB();
    objE.funcE();

    return 0;
}