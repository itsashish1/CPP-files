#include <iostream>
#include <functional>
#include <vector>

struct X { void hello() const { std::cout << "hi\n"; } };

int main(){
    std::vector<X> v(2);
    auto f = std::mem_fn(&X::hello);
    for (auto &x : v) f(x);
    return 0;
}
