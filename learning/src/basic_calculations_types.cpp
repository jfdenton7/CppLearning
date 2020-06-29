#include <iostream>
#include <stdio.h>
#include <string>

#define NEWLINE '\n' // look at this (same)

/**
 * main funct
 */ 
int main() {
    int x, y;
    int a = 3;
    float b = 4.3;

    int height(0);
    int length{0};

    int foo = 0;
    auto bar = foo; // automatically asigns the type

    int fee = 0;
    decltype(fee) beg; // grabs type (not great use case)


    std::string name;
    name = "wasss up!";

    std::cout << name << std::endl;    
    // ! look at me!
    std::string first ("example 1");
    std::string second {"another one"};
    // ? I don't u
    std::cout << first << std::endl;

    float yikes = 6.02e23; // Agravagdo's number

    char letter = 'a';

    std::string xyz = "hello from \
    the other side!";
    
    std::cout << xyz;

    bool trueFalse = true;

    int* ptr = nullptr; 

    const double PI = 3.1459;

}
