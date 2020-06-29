#include <iostream>

int add(int x, int y) {
    return x + y;
}


// reduce function call overheard
inline void call_me() {
    std::cout << "Just a call..." << std::endl;
}

// example default value in function
int add_three_or_more(int a, int b=3) {
    if (b < 3) {
        std::cout << "OOPS, should be 3 or more" << std::endl;
        return -1;
    }
    return a + b;
}

int main() {
    // ! NOTE
    /*
    EXIT_SUCCESS, EXIT_FAILURE defined in <cstdlib>
    */
    std::cout << add(1, 2) << std::endl;

    // YOOOOO
    call_me();
    auto ptr = call_me;
    ptr();    

    std::cout << add_three_or_more(4);
    std::cout << std::endl << add_three_or_more(4, 4) << std::endl;
    return 0;
}