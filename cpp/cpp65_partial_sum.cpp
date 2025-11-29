#include <iostream>
#include <numeric>
#include <vector>

int main(){
    std::vector<int> v{1,2,3,4};
    std::vector<int> out(v.size());
    std::partial_sum(v.begin(), v.end(), out.begin());
    for (int x : out) std::cout << x << ' ';
    std::cout << std::endl;
    return 0;
}
