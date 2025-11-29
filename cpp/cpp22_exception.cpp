#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("something went wrong");
    } catch (const std::exception &e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    return 0;
}
