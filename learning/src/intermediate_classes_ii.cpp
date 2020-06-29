#include <iostream>
#include <string>

class DefConstructor {
    public:
        int total;
        void accumulate(int x) { total += x; }
        // assumed default constructor (implicit)
};

class CounterExample {
    public:
        int total;
        // here, no default constructor exists
        CounterExample(int init): total(init) {}
        void accumulate(int x) { total += x; }
};

class DestructorExample {
    public:
        std::string* name;
        DestructorExample(): name(new std::string) {}
        DestructorExample(const std::string& str) : name(new std::string(str)) {}

        ~DestructorExample() { delete name; }

};

class CopyConstructorExample {
    public:
        std::string* name;
        CopyConstructorExample(std::string str): name(new std::string(str)) {}
        // copy constructor signature
        CopyConstructorExample(const CopyConstructorExample& toCopy) {
            this->name = toCopy.name;
        }

        // copy assignment overload operator
        CopyConstructorExample& operator= (const CopyConstructorExample& toCopy) {
            delete this->name; // ! be sure to remove any allocated space for name ! 
            this->name = toCopy.name;
            return *this;
        }
};


int main() {

    DestructorExample ds_example ("Josiah");
    
    std::cout << ds_example.name << std::endl;

    return 0; // end of function DsExample's destructor is called

}