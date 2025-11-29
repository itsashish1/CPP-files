#include <iostream>
#include <chrono>
#include <thread>

int main(){
    auto start = std::chrono::steady_clock::now();
    auto work = []{ std::this_thread::sleep_for(std::chrono::milliseconds(50)); };
    work();
    auto dur = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
    std::cout << "work took " << dur.count() << " ms\n";
    return 0;
}
