#include <iostream>
#include <regex>
#include <string>

int main(){
    std::string s = "abc 123 def";
    std::smatch m;
    std::regex re("(\\d+)");
    if (std::regex_search(s, m, re)) std::cout << "found digits: " << m.str(1) << std::endl;
    return 0;
}
