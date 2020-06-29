#include <iostream>
#include <sstream> // best used for conversion of str --> int wrt input

int main() {
    std::string str;
    float price;
    int quantity;

    std::cout << "Enter a price for your items: ";
    std::getline(std::cin, str);
    std::stringstream(str) >> price;

    std::cout << "Enter a quantity: ";    
    std::getline(std::cin, str);
    std::stringstream(str) >> quantity;

    std::cout << "Total price: " << price * quantity << std::endl;

    return 0;
}