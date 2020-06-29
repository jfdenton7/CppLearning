#include <iostream>



int main() {
    int* foo = new int[5]; // allocate on heap an array of 5 integers

    // to avoid alloc exceptions...
    int* bar = new int[5];

    if (bar == nullptr) {
        exit(-1);
    }

    // to free...
    *foo = 1;
    delete foo;
    std::cout << *foo << std::endl;
    std::cout << foo << std::endl;

    if (foo == NULL) {
        std::cout << "foo is null" << std::endl; 
    }

}