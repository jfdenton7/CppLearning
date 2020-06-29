#include <iostream>

long factorial(long n);
bool odd(int x);
bool even(int x);

int main() {
    std::cout << odd(3) << std::endl;

    std::cout << factorial(4) << std::endl;
}

bool odd(int x) {
    if (x % 2 == 0) return false;
    return true;
}

bool even(int x) {
    if (x % 2 == 0) return true;
    return false;
}

long factorial(long n) {
    if (n > 1) return n * factorial(n - 1);
     else return n;    
}