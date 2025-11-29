#include <iostream>
#include <chrono>
#include <thread>

int main() {
    using namespace std::chrono;
    auto t1 = high_resolution_clock::now();
    std::this_thread::sleep_for(milliseconds(100));
    auto t2 = high_resolution_clock::now();
    std::cout << "Slept for " << duration_cast<milliseconds>(t2 - t1).count() << " ms\n";
    return 0;
}
