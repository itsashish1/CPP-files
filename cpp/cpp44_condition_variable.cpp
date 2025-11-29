#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex m;
std::condition_variable cv;
bool ready = false;

void wait_for_ready(){
    std::unique_lock<std::mutex> lk(m);
    cv.wait(lk, []{ return ready; });
    std::cout << "notified\n";
}

int main(){
    std::thread t(wait_for_ready);
    {
        std::lock_guard<std::mutex> lk(m);
        ready = true;
    }
    cv.notify_one();
    t.join();
    return 0;
}
