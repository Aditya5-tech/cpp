#include<iostream>
using namespace std;
class NaturalNumberSum {
private:
    int n;
public:
    NaturalNumberSum() {
        n = 10; 
    }

    int calculateSum() {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }

    void displaySum() {
        std::cout << "Sum of first " << n << " natural numbers is: " << calculateSum() << std::endl;
    }
};

int main() {
    NaturalNumberSum obj;
    obj.displaySum();
    return 0;
}
