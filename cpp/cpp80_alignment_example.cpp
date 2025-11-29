#include <iostream>
#include <cstddef>

struct alignas(16) A { double d; };

int main(){
    std::cout << "alignment of A: " << alignof(A) << std::endl;
    A a; std::cout << "address mod 16: " << (reinterpret_cast<std::uintptr_t>(&a) % 16) << std::endl;
    return 0;
}
