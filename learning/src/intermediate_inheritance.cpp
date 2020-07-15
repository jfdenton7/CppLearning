#include <iostream>
#include <string>

#define PI 3.145

class FriendExample {
    private:
        int num;
    public:
    FriendExample() {}
    FriendExample(int n): num(n) {}
    friend int getOtherNum(const FriendExample&);
};

int getOtherNum(const FriendExample& other) {
    return other.num;  // able to access because this function is a 'friend'
}

class Shape {
    public:
        // virtual allows polymorphism (pointer of type Shape to derived class calls the right class)
        // =0 allows this method to become abstract
        virtual int area() =0;
        // ! NOTE !
        // as an abstract base class
        // Shape cannot be instantiated
        
};

// inheriting from Shape
class Circle : public Shape {
    int radius;
    public:
        Circle(int r): radius(r) {}
        int area() {    // override Shape method
            return radius * radius * PI;
        }
};

class Person {
    protected: // members of subclasses can now access...
    int age;
    std::string name;     
};

class Student : protected Person {
    int gradYear;
    Student(int age, std::string name, int gradYear) {
        this->age = age;
        this->name = name;
        this->gradYear = gradYear;
    }
};

int main() {

    Circle* c = new Circle(3);

    Shape* s = c;

    std::cout << s->area() << std::endl;
    std::cout << c->area() << std::endl;

    return 0;
}