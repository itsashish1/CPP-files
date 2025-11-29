#include <iostream>

template<typename T>
struct Printer { static void print(const T&){ std::cout << "generic\n"; } };

template<>
struct Printer<const char*> { static void print(const char* s){ std::cout << s << '\n'; } };

int main(){
    Printer<int>::print(0);
    Printer<const char*>::print("specialized");
    return 0;
}
