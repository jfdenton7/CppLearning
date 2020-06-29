#include <iostream>
#include <string>

template<typename T> class Container {
    private:
        T elem;
    public:
        Container(T arg) : elem(arg) {};
        T increase() { return ++elem; }
};

// class specialization
template <> class Container<char> {
    private:
        char elem;
    public:
        Container(char arg) : elem(arg) {};
        char uppercase() {
            if (elem >= 'a' && elem <= 'z') elem += 'A' - 'a';
            return elem;
        }
};


int main () {

    Container<char> letter ('a');

    std::cout << letter.uppercase() << std::endl;

    return 0;
}