#include <iostream>
#include <shared_mutex>
#include <thread>
#include <vector>

int data = 0;
std::shared_mutex rw;

void reader() {
    std::shared_lock<std::shared_mutex> lk(rw);
    std::cout << "read " << data << '\n';
}

void writer() {
    std::unique_lock<std::shared_mutex> lk(rw);
    ++data;
}

int main(){
    std::vector<std::thread> trs;
    for (int i=0;i<3;++i) trs.emplace_back(reader);
    std::thread w(writer);
    for (auto &t: trs) t.join();
    w.join();
    return 0;
}
