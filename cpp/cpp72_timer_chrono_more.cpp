#include <iostream>
#include <chrono>
#include <thread>

int main(){
    using namespace std::chrono;
    auto t0 = steady_clock::now();
    std::this_thread::sleep_for(milliseconds(10));
    auto t1 = steady_clock::now();
    std::cout << "Elapsed us: " << duration_cast<microseconds>(t1-t0).count() << std::endl;
    return 0;
}
