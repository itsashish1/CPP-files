#include <iostream>
#include <memory>

struct X { int id; X(int i):id(i){} ~X(){ std::cout<<"~X("<<id<<")\n";} };

int main(){
    auto d = [](X* p){ std::cout << "custom delete for X\n"; delete p; };
    std::shared_ptr<X> p(new X(7), d);
    std::cout << "use_count: " << p.use_count() << std::endl;
    return 0;
}
