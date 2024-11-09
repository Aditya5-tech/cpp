#include <iostream>
#include <cmath>

class PrimeChecker {
private:
    // Private function to check if a number is prime
    bool isPrime(int n) const {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        
        for (int i = 5; i <= std::sqrt(n); i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

public:
    // Friend class that can access the private isPrime function
    friend class PrimeTester;
};

// Friend class that can use the PrimeChecker's isPrime function
class PrimeTester {
public:
    bool checkPrime(const PrimeChecker& checker, int n) const {
        return checker.isPrime(n);
    }
};

int main() {
    Prime
