#include <iostream>

struct Animal { virtual void speak() const { std::cout << "(silence)\n"; } };
struct Dog : Animal { void speak() const override { std::cout << "Woof\n"; } };

int main() {
    Dog d;
    Animal& a = d;
    a.speak();
    return 0;
}
