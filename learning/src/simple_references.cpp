#include <iostream>


/**
 * pass by reference example
 * @param x 
 * @param y
 * @param z
 */
void dupe(int& x, int& y, int& z) { // how we pass by reference
    x = 1;
    y = 2;
    z = 3;
}

/** //! EXAMPLE TO guarantee no modifications
 * @param a
 * @param b
 */
std::string concat(const std::string& a, const std::string& b) {
    return a + b; 
}

int main() {
    int x, y, z;
    x = y = z = 0;

    dupe(x, y, z);
    // locals edited...
    std::cout << x << ", " << y << ", " << z << std::endl;    

    return 0;
}

