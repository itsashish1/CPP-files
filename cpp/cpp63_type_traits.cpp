#include <iostream>
#include <type_traits>

int main(){
    std::cout << "int is integral: " << std::boolalpha << std::is_integral<int>::value << std::endl;
    std::cout << "double is integral: " << std::is_integral<double>::value << std::endl;
    return 0;
}
