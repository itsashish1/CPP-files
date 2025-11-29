#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string,int> ages;
    ages["Alice"] = 30;
    ages["Bob"] = 25;
    for (auto &p : ages) std::cout << p.first << ": " << p.second << '\n';
    return 0;
}
