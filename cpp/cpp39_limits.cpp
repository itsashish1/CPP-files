#include <iostream>
#include <limits>

int main(){
    std::cout << "int min: " << std::numeric_limits<int>::min() << " max: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "double digits: " << std::numeric_limits<double>::digits10 << std::endl;
    return 0;
}
