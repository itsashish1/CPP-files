#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> m{{1,2,3},{4,5,6},{7,8,9}};
    for (auto &row : m){ for (int x : row) std::cout << x << ' '; std::cout << std::endl; }
    return 0;
}
