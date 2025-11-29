#include <iostream>
#include <memory>

int main() {
    auto p = std::make_unique<int>(42);
    std::cout << "unique_ptr holds: " << *p << std::endl;
    return 0;
}
