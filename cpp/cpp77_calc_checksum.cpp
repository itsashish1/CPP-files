#include <iostream>
#include <vector>

unsigned checksum(const std::vector<unsigned char>& data){
    unsigned s = 0; for (auto b : data) s = (s + b) & 0xFF; return s;
}

int main(){
    std::vector<unsigned char> d{1,2,3,4,5};
    std::cout << "checksum=0x" << std::hex << checksum(d) << std::dec << std::endl;
    return 0;
}
