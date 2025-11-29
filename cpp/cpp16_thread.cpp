#include <iostream>
#include <thread>

void worker(int id) {
    std::cout << "Worker " << id << " says hi\n";
}

int main() {
    std::thread t(worker, 1);
    t.join();
    return 0;
}
