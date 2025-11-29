#include <iostream>
#include <variant>

int main(){
    std::variant<int,std::string> v = "hello";
    if (std::holds_alternative<std::string>(v)) std::cout << std::get<std::string>(v) << std::endl;
    v = 42;
    if (std::holds_alternative<int>(v)) std::cout << std::get<int>(v) << std::endl;
    return 0;
}
