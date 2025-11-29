#include <iostream>
#include <vector>
#include <algorithm>

struct Item { std::string name; int val; };

int main(){
    std::vector<Item> v{{"a",3},{"b",1},{"c",2}};
    std::sort(v.begin(), v.end(), [](const Item& x,const Item& y){ return x.val < y.val; });
    for (auto &i: v) std::cout << i.name << ':' << i.val << ' ';
    std::cout << std::endl;
    return 0;
}
