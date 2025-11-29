#include <iostream>
#include <set>
#include <unordered_set>

int main(){
    std::set<int> s{3,1,2};
    for (int x : s) std::cout << x << ' ';
    std::cout << std::endl;
    std::unordered_set<int> us{3,1,2};
    for (int x : us) std::cout << x << ' ';
    std::cout << std::endl;
    return 0;
}
