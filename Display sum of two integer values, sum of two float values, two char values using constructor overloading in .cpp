
#include<iostream>
using namespace std;

class Overload{
    int a,b,sum;
    float c,d,sum1;
    char e,f;
    enum DataType { INT_TYPE, FLOAT_TYPE, CHAR_TYPE } dataType;
    public:
    Overload(int a,int b){
        this->a=a;
        this->b=b;
        sum=a+b;
        dataType=INT_TYPE;
    }
    Overload(float c,float d){
        this->c=c;
        this->d=d;
        sum1=c+d;
        dataType=FLOAT_TYPE;
    }
    Overload(char e,char f){
        this->e=e;
        this->f=f;
        dataType=CHAR_TYPE;
    }
    void display(){
        switch (dataType) {
            case INT_TYPE:
                cout << "Sum of integers: " << sum << endl;
                break;
            case FLOAT_TYPE:
                cout << "Sum of floats: " << sum1 << endl;
                break;
            case CHAR_TYPE:
                cout << "Sum of Characters: " << (int)e + (int)f << endl;
                break;
        }
    }
};

int main(){
    Overload h(5,10);
    h.display();
    Overload g(3.2f,5.0f);
    g.display();
    Overload j('A','B');
    j.display();
    return 0;
}
