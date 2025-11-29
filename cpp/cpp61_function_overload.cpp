#include <iostream>

void print(int x) { std::cout << "int: " << x << std::endl; }
void print(const char* s) { std::cout << "cstr: " << s << std::endl; }

int main(){
    print(123);
    print("hello");
    return 0;
}
