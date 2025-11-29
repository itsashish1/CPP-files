#include <iostream>
#include <map>
#include <string>

int main(){
    std::multimap<std::string,int> mm;
    mm.emplace("a",1);
    mm.emplace("a",2);
    mm.emplace("b",3);
    for (auto &p : mm) std::cout << p.first << ':' << p.second << ' ';
    std::cout << std::endl;
    return 0;
}
