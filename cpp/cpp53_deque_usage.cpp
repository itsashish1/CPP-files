#include <iostream>
#include <deque>

int main(){
    std::deque<int> d{1,2,3};
    d.push_front(0); d.push_back(4);
    for (int x : d) std::cout << x << ' ';
    std::cout << std::endl;
    return 0;
}
