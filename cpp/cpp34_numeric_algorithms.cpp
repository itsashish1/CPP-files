#include <iostream>
#include <numeric>
#include <vector>

int main(){
    std::vector<int> v(10);
    std::iota(v.begin(), v.end(), 1);
    int s = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "sum 1..10 = " << s << std::endl;
    return 0;
}
