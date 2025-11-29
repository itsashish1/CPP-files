#include <iostream>
#include <string>

struct S {
    std::string data;
    S(const std::string& s):data(s){}
    S& operator=(S&& other) noexcept { data = std::move(other.data); return *this; }
};

int main(){
    S a("hello");
    S b("world");
    b = std::move(a);
    std::cout << "b.data = " << b.data << std::endl;
    return 0;
}
