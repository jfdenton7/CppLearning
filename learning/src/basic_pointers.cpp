#include <iostream>


int add(int a, int b) {
    return a + b;
}

// example function header
int funct_head(int x, int y, int (*funct)(int, int)) {
    return funct(x, y);
}

int main() {
    char a = 'a';
    char* foo = &a;

    char b = *foo;

    std::cout << b << std::endl;

    int arr[5];
    int* ptrArr;
    ptrArr = arr; // valid, the reverse is not!

    int (*funct_ptr)(int, int) = add;

    std::cout << funct_ptr(1, 2) << std::endl;
}