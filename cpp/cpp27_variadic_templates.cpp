#include <iostream>

template<typename T>
T sum(T v) { return v; }

template<typename T, typename... Ts>
T sum(T first, Ts... rest) { return first + sum(rest...); }

int main(){
    std::cout << "sum = " << sum(1,2,3,4,5) << std::endl;
    return 0;
}
