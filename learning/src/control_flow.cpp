#include <sstream>
#include <string>
#include <iostream>

int main() {
    int guess;
    int secret = 79;
    std::string str; 

    std::cout << " Guess the secret number! " << std::endl;
    std::cout << " Enter your guess: ";
    std::getline(std::cin, str);
    std::stringstream(str) >> guess;
    

    if (guess == secret) {
        std::cout << " You win! " << std::endl;
        return 0;
    }

    std::cout << " Too bad, you lose... " << std::endl;

    return 0;
}