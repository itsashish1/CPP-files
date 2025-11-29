#include <iostream>
#include <utility>

int main(){
    std::pair<int,std::string> p{42, "answer"};
    std::cout << p.first << ", " << p.second << std::endl;
    auto p2 = std::make_pair(1,2);
    std::cout << p2.first << "," << p2.second << std::endl;
    return 0;
}
