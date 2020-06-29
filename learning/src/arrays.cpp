#include <iostream>

void proc(int arg[], int len) {
    for (int i = 0; i < len; i++) {
        std::cout << arg[i] << std::endl;
    }
}

int main() {
    // basic static init
    int foo[5];

    int bar[5] = {1, 2, 3, 4, 5};

    int car[5] = {10, 20, 30}; // remaining are 0's

    int cat[5] = {}; // all zeroes

    int bat[] = {1, 2, 3}; // auto fills
    proc(bat, 3);

    bat[0] = 2;

    char word[] = {'h', 'e', 'l', 'l', 'o'};
    // illegal to re-assign arrays 
}