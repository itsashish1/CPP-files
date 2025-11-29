#include <iostream>
#include <queue>
#include <vector>

int main(){
    std::priority_queue<int> pq;
    pq.push(5); pq.push(1); pq.push(10);
    while(!pq.empty()){ std::cout << pq.top() << ' '; pq.pop(); }
    std::cout << std::endl;
    return 0;
}
