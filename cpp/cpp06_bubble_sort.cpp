#include <iostream>
#include <vector>

int main() {
    std::vector<int> v {5, 2, 9, 1, 5, 6};
    for (size_t i = 0; i < v.size(); ++i)
        for (size_t j = 0; j + 1 < v.size(); ++j)
            if (v[j] > v[j+1]) std::swap(v[j], v[j+1]);
    for (int x : v) std::cout << x << ' ';
    std::cout << std::endl;
    return 0;
}
