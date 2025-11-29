#include <iostream>
#include <initializer_list>

int main() {
    for (int x : {10, 20, 30}) std::cout << x << ' ';
    std::cout << std::endl;
    return 0;
}
