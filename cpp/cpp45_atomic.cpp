#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> counter{0};

void inc(){ for (int i=0;i<1000;++i) ++counter; }

int main(){
    std::thread t1(inc), t2(inc);
    t1.join(); t2.join();
    std::cout << "atomic counter = " << counter.load() << std::endl;
    return 0;
}
