#include <iostream>

// example overload
/*
int sum(int x, int y) {
    return x + y;
}
double sum(double x, double y) {
    return x + y;
}
*/

// Generics!!!
template <typename Real>
Real sum(Real a, Real b) {
    return a + b;
}

template <typename T, typename U>
bool equal(T a, U b) {
    return a == b;
}

template <typename T, int N>
T fixed_mult(T val) {
    return val * N;
}

int main() {
    std::cout << sum<int>(2, 3) << std::endl;
    std::cout << sum<float>(2.5, 3.5) << std::endl;

    if (equal(2, 2.0)) { // deduced to equal<int, float>(...)
        std::cout << "equal";
    } else {
        std::cout << "unequal";
    }    

    std::cout << fixed_mult<int, 2>(10) << '\n';

    return 0;
}