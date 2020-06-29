#include <iostream>
#include <string>

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


int main() {

    return 0;
}