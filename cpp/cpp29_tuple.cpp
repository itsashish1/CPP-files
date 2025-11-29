#include <iostream>
#include <tuple>

int main(){
    std::tuple<int,std::string,double> t{1, "two", 3.0};
    std::cout << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << std::endl;
    return 0;
}
