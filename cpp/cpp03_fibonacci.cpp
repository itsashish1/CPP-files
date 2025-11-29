#include <iostream>

int main() {
    int n = 10;
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        std::cout << a << (i+1==n? '\n' : ' ');
        int next = a + b;
        a = b; b = next;
    }
    return 0;
}
