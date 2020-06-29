#include <iostream>

static int abs_private(int n) {
    if (n < 0) {
        return n * (- 1);
    } else if (n > 0) {
        return n;
    } else {
        return n;
    }
}

int main() {
    std::cout << abs_private(-3) << std::endl;

    return 0;
}