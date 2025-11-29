#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    int r = (int)std::sqrt(n);
    for (int i = 3; i <= r; i += 2) if (n % i == 0) return false;
    return true;
}

int main() {
    std::cout << "Prime 97? " << (isPrime(97) ? "yes" : "no") << std::endl;
    return 0;
}
