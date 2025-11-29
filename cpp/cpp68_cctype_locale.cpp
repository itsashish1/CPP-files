#include <iostream>
#include <cctype>
#include <string>

int main(){
    std::string s = "Hello";
    for (char &c : s) c = std::toupper(static_cast<unsigned char>(c));
    std::cout << s << std::endl;
    return 0;
}
