#include <iostream>

unsigned long long factorial(unsigned int n) {
    unsigned long long res = 1;
    for (unsigned int i = 2; i <= n; ++i) res *= i;
    return res;
}

int main() {
    std::cout << "5! = " << factorial(5) << std::endl;
    return 0;
}
