#include <iostream>

struct Base { virtual void f(){ std::cout << "Base\n"; } };
struct A : virtual Base { void f() override { std::cout << "A\n"; } };
struct B : virtual Base { void f() override { std::cout << "B\n"; } };
struct C : A, B {};

int main(){
    C c; c.f();
    Base &b = c; b.f();
    return 0;
}
