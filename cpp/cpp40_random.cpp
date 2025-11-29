#include <iostream>
#include <random>

int main(){
    std::mt19937 rng{std::random_device{}()};
    std::uniform_int_distribution<int> dist(1, 100);
    for (int i=0;i<5;++i) std::cout << dist(rng) << (i+1==5? '\n' : ' ');
    return 0;
}
