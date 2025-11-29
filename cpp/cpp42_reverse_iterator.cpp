#include <iostream>
#include <vector>

int main(){
    std::vector<int> v{1,2,3,4};
    for (auto it = v.rbegin(); it != v.rend(); ++it) std::cout << *it << ' ';
    std::cout << std::endl;
    return 0;
}
