#include<iostream>
using namespace std;

class Student{
    int n1, n2;
    public:
        Student(int x, int y) : n1(x), n2(y) {}
        inline int sum();
};
int Student::sum(){
    return n1 + n2;
}
int main() {
    int a, b;
    cout<<"Enter value for first : ";
    cin>>a;
    cout<<"Enter value for second : ";
    cin>>b;
    Student stu(a, b);
    cout<<"Sum of two numbers are : "<<stu.sum();
    return 0;
}s