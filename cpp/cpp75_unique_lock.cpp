#include <iostream>
#include <mutex>

int main(){
    std::mutex m;
    {
        std::unique_lock<std::mutex> lk(m);
        std::cout << "locked by unique_lock" << std::endl;
    }
    std::cout << "unlocked" << std::endl;
    return 0;
}
