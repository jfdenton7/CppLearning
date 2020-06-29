#include <iostream>

// namespaces keep entities together
namespace foo {
    int x;
    int y;

    int sum(int x, int y) {
        return x + y;
    }
}

namespace bar {
    float z;
}

namespace foo {
    float z; // add to namespace foo
}

void print(int x, int y) {
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

int main() {
    // foo is global  
    // using namespace ... is scoped to block  
    // namespace new_name = old_name // allow aliasing
    int x = 10;
    int y = 20;
    {   // scoped block
        int x;
        x = 50;
        y = 50;
        print(x, y);
    }
    print(x, y);

    std::cout << foo::sum(foo::x, foo::y) << std::endl;

    
}