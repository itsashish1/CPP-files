#include <iostream>
#include <optional>

std::optional<int> find_even(const std::vector<int>& v) {
    for (int x : v) if (x % 2 == 0) return x;
    return std::nullopt;
}

int main() {
    std::vector<int> v{1,3,5,8,9};
    auto r = find_even(v);
    if (r) std::cout << "Found even: " << *r << std::endl; else std::cout << "No even" << std::endl;
    return 0;
}
