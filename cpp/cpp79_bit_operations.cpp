#include <iostream>

int main(){
    unsigned x = 0b1010u;
    std::cout << "x = " << x << " (~x = " << (~x) << ")" << std::endl;
    std::cout << "x<<1 = " << (x << 1) << std::endl;
    return 0;
}
