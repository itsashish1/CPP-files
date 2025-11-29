#include <iostream>
#include <any>
#include <string>

int main(){
    std::any a = 10;
    a = std::string("abc");
    try {
        std::cout << std::any_cast<std::string>(a) << std::endl;
    } catch (const std::bad_any_cast&) {
        std::cout << "bad cast" << std::endl;
    }
    return 0;
}
