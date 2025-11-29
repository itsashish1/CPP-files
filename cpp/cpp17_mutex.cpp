#include <iostream>
#include <thread>
#include <mutex>

int counter = 0;
std::mutex m;

void inc() {
    for (int i = 0; i < 1000; ++i) {
        std::lock_guard<std::mutex> lk(m);
        ++counter;
    }
}

int main() {
    std::thread t1(inc), t2(inc);
    t1.join(); t2.join();
    std::cout << "counter = " << counter << std::endl;
    return 0;
}
