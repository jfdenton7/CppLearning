#include <iostream>

int main() {
    int counter, x, y;

    // basic while loop
    counter = 10;
    while (counter > 0) {
        std::cout << counter-- << std::endl;
    }

    // counter is 0
    do {
        std::cout << counter++ << std::endl;
    } while (counter < 11);
    
    for (int i = 0; i < 11; i++) {
        std::cout << i << std::endl;
    }    
    
    // multiple incrementors... (hide to block)
    {
        int i, j;
        for (i = 0, j = 0;  i < 10, j < 5; i++, j++) {
            std::cout << "Counting: " << j << std::endl;
        }
    }

    while (true) break;    

    // branch based control flow
    int x = 3;
    switch (x) {
        case 1:
            std::cout << "One" << std::endl;
            break;
        case 2:
            std::cout << "Two" << std::endl;
            break;
        case 3:
            std::cout << "Three" << std::endl;
            break; 
        default:
            std::cout << "x is greater than three" << std::endl;
    }
    
}