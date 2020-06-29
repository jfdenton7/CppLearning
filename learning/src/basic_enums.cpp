#include <iostream>

#define PI 3.14159

class Rectangle {
    private:
        int width, height;
    public:
        Rectangle();
        // Rectangle(int, int);
        Rectangle(int x, int y) : width(x), height(y) {}
        int area();
};

class Circle {
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        double area() { return PI * radius; }
};
 
class Cylinder {
    private:
        double height;
        Circle circle;
    public:

        Cylinder(double r, double h) : height(h), circle(r) {}
        double volume() { return circle.area(); }
};

// Rectangle::Rectangle() {
//     this->width = 0;
//     this->height = 0;
// }

/*
Rectangle::Rectangle(int width, int height) {
    // ! this.width = width;
    this->width = width;
    this->height = height;
}
*/

int Rectangle::area() {
    return this->width * this->height;
}

enum color {
    RED,
    BLUE,
    GREEN
};

enum class Colors {
    BLACK,
    WHITE,
    GREY
};

int main() {

    color color = RED;
    // OR
    enum color color_2 = BLUE;

    if (color == RED) {
        std::cout << "RED\n";
    } else {
        std::cout << "err\n";
    }

    Colors black = Colors::BLACK;
    if (black == Colors::BLACK) {
        std::cout << "black" << std::endl;
    }

    std::cout << "Rectangle" << std::endl;

    Rectangle rect(2, 3); // init with constructor (static)
    // Rectangle rectb;
    std::cout << rect.area() << std::endl;
    // std::cout << rectb.area() << std::endl;

    /*
    Rectangle rectb; // default constructor
    Rectangle rectc(); // function declaration
    Rectangle rectd{} // default
    */
   
    Rectangle* foo = new Rectangle(3, 4);
    Rectangle* arr = new Rectangle[2] { {2, 3}, {3, 4} };

    delete[] arr;

    

    return 0;

}