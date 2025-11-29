#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string s = "abc123";
    std::regex re("[a-z]+\\d+");
    std::cout << (std::regex_match(s, re) ? "match" : "no match") << std::endl;
    return 0;
}
