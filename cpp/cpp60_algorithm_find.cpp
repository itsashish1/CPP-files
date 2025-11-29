#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v{10, 20, 30, 40};
    auto it = std::find(v.begin(), v.end(), 30);
    if (it != v.end()) std::cout << "Found " << *it << std::endl;
    else std::cout << "Not found" << std::endl;
    return 0;
}
