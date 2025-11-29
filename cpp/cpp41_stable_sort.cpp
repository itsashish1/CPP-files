#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::pair<int,char>> v{{2,'a'},{1,'x'},{2,'b'},{1,'y'}};
    std::stable_sort(v.begin(), v.end(), [](auto &a, auto &b){ return a.first < b.first; });
    for (auto &p : v) std::cout << '(' << p.first << ',' << p.second << ") ";
    std::cout << std::endl;
    return 0;
}
