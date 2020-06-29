#include <iostream>

class Vector {
    private:
        int x, y;
    public:
        Vector() {};
        Vector(int a, int b) : x(a), y(b) {}; 
        Vector operator+ (const Vector&); 
        Vector& operator= (const Vector&);
        int get_x() { return this->x; }   
        int get_y() { return this->y; }
};

Vector Vector::operator+ (const Vector& operand) {
    Vector temp;
    temp.x = this->x + operand.x;
    temp.y = this->y + operand.y;

    return temp;
}

Vector& Vector::operator= (const Vector& operand) {
    this->x = operand.x;
    this->y = operand.y;

    return *this;
}

int main() {
    Vector foo(2, 2);
    Vector bar(3, 4);

    Vector res = foo + bar;
    // implicit 
    // res = foo.operator+(bar)

    std::cout << "res.x: " << res.get_x() << ", ";
    std::cout << "res.y: " << res.get_y() << std::endl;



    return 0;
}

class Box {
    public:
        static int total;
        Box() {
            this->total++;
        };
};

class ExampleConst {
    public:
        int x;
        ExampleConst(int val): x(val) {};
        int get() const { return x; } // cannot modify not const
};

/*
class ExampleModif {
    public:
        int x;
        ExampleModif(int val) : x(val) {};
        int& get() { return x; };
};

int main() {
    ExampleModif a(30);
    ! LOOK AT ME !
    a.get() = 15; // return by reference allows modifying x
}

*/



