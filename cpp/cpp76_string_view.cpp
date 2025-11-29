#include <iostream>
#include <string_view>

int main(){
    std::string_view sv = "hello world";
    std::cout << sv.substr(6) << std::endl;
    return 0;
}
