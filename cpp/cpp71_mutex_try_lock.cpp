#include <iostream>
#include <mutex>

int main(){
    std::mutex m;
    if (m.try_lock()){
        std::cout << "locked\n";
        m.unlock();
    } else std::cout << "couldn't lock" << std::endl;
    return 0;
}
