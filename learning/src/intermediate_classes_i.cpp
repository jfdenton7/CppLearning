#include <iostream>
#include <string>

/* 
====================================
Example of templating in classes
====================================
*/

template<typename T>
class Pair {
    private:
        T pair[2];
    public:
        Pair(T a, T b) {
            pair[0] = a;
            pair[1] = b;
        }
        T getOne() { return pair[0]; }
        T getTwo() { return pair[1]; }
};

int main() {
    

    Pair<int> pair(1, 2);

    // lambda
    auto greater = [](auto x, auto y) { return (x > y)? x : y; };

    std::cout << pair.getOne() << std::endl;
    std::cout << pair.getTwo() << std::endl;

    std::cout << "max: " << greater(pair.getOne(), pair.getTwo()) << std::endl;

    Pair<std::string> name("Josiah", "Denton");

    return 0;
}