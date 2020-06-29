#include <iostream>

int main() {
    int y, x, z;

    y = 2 + (x = 5);

    x, y, z = 8;

    // ternary 
    int a, b, c;
    a = b = 3;

    c = (a == b) ? a : b;

    // comma operator 
    a = (b = 3, b + 2); // left to right, right most assigns

    // casts
    int i;
    float pi = 3.14;
    i = (int) pi;

    //! 16 levels of precedence

}