#include <iostream>
#include <numeric>
#include <vector>

int main(){
    std::vector<int> v{1,2,3,4,5};
    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "sum = " << sum << std::endl;
    int prod = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
    std::cout << "product = " << prod << std::endl;
    return 0;
}
