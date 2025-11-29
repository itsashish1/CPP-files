#include <iostream>
#include <stack>
#include <queue>

int main() {
    std::stack<int> s; s.push(1); s.push(2);
    std::queue<int> q; q.push(3); q.push(4);
    std::cout << "stack top: " << s.top() << " queue front: " << q.front() << std::endl;
    return 0;
}
