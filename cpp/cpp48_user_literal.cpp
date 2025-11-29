#include <iostream>

constexpr long long operator"" _kb(unsigned long long x){ return x * 1024; }

int main(){
    auto size = 4_kb;
    std::cout << "4_kb = " << size << std::endl;
    return 0;
}
