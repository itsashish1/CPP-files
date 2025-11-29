#include <iostream>

template<typename T>
T add(T a, T b) { return a + b; }

int main() {
    std::cout << "add(2,3) = " << add(2,3) << '\n';
    std::cout << "add(2.5,3.1) = " << add(2.5,3.1) << '\n';
    return 0;
}
