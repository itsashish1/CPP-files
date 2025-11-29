#include <iostream>
#include <future>

int heavy(){ return 42; }

int main(){
    std::future<int> f = std::async(std::launch::async, heavy);
    std::shared_future<int> sf = f.share();
    std::cout << sf.get() << '\n';
    std::cout << sf.get() << '\n';
    return 0;
}
