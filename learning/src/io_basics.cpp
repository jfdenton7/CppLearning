#include <iostream>

int main() {
    std::cout << 120 << std::endl;
    int age = 21;

    std::cout << "Hi! I am Josiah, aged " << age << std::endl;

    // these are stream, you choose the direction
    std::cout << "How old are you?" << std::endl;
    int your_age;
    //// std::cin >> your_age;
    /*  Chaining 
    std::cin >> x >> y;
    */

    std::string str;

    std::cout << "What's your name?" << std::endl;
    std::getline(std::cin, str);
    std::cout << "Hello " << str << std::endl;
    return 0;
}