#include <iostream>
#include <exception>

void inner(){ throw std::runtime_error("inner error"); }

void outer(){
    try { inner(); }
    catch(...) { std::throw_with_nested(std::runtime_error("outer context")); }
}

int main(){
    try { outer(); }
    catch (const std::exception &e){
        std::cout << "caught: " << e.what() << std::endl;
        try { std::rethrow_if_nested(e); } catch(const std::exception &ne) { std::cout << "nested: " << ne.what() << std::endl; }
    }
    return 0;
}
