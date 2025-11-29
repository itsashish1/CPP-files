#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names {"Alice", "Bob", "Carol"};
    names.push_back("Dave");
    for (const auto& n : names) std::cout << n << '\n';
    return 0;
}
