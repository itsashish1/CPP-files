#include <iostream>
#include <tuple>

int main(){
    auto t = std::make_tuple(1, 2.5, "three");
    auto [i, d, s] = t;
    std::cout << i << ", " << d << ", " << s << std::endl;
    return 0;
}
