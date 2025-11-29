#include <iostream>

constexpr unsigned long long fact(unsigned n) {
    return n <= 1 ? 1 : n * fact(n - 1);
}

int main() {
    constexpr auto v = fact(6);
    std::cout << "6! = " << v << std::endl;
    return 0;
}
