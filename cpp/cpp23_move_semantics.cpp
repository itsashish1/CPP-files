#include <iostream>
#include <utility>
#include <string>

struct Big {
    std::string data;
    Big(const std::string& s): data(s) {}
    Big(Big&& other) noexcept : data(std::move(other.data)) {}
};

int main(){
    Big a("lots of data");
    Big b(std::move(a));
    std::cout << "Moved data: " << b.data << std::endl;
}
