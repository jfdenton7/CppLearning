#include <iostream>
#include <string>

using WORD = unsigned int;

struct product {
    int weight;
    double price;
    std::string currency;
};

union private_byte { // unions refer to the same loc
    char c;
    short s;
};

int main() {

    product apple;
    apple.weight = 3;
    apple.currency = "USD";
    apple.price = 2.99;
}

// anonymous union!
struct book2_t {
  char title[50];
  char author[50];
  union {
    float dollars;
    int yen;
  };
} book2;
