#include <iostream>
#include <utility>

template<std::size_t... I>
void print_indexes(std::index_sequence<I...>){ ((std::cout << I << ' '), ...); }

int main(){
    print_indexes(std::make_index_sequence<5>());
    std::cout << std::endl;
    return 0;
}
