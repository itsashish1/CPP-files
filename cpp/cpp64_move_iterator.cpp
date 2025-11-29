#include <iostream>
#include <vector>
#include <iterator>

int main(){
    std::vector<std::string> v{"one","two","three"};
    std::vector<std::string> dest;
    std::move_iterator<std::vector<std::string>::iterator> mbegin(v.begin());
    std::move_iterator<std::vector<std::string>::iterator> mend(v.end());
    dest.insert(dest.end(), mbegin, mend);
    for (auto &s : dest) std::cout << s << ' ';
    std::cout << std::endl;
    return 0;
}
