#include <iostream>
#include <sstream>

int main(){
    std::stringstream ss;
    ss << 1 << ' ' << 2 << ' ' << 3;
    int a,b,c; ss >> a >> b >> c;
    std::cout << a << ',' << b << ',' << c << std::endl;
    return 0;
}
