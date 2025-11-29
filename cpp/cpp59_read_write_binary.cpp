#include <iostream>
#include <fstream>

int main(){
    const char* fname = "bin.dat";
    {
        std::ofstream out(fname, std::ios::binary);
        int x = 0x12345678;
        out.write(reinterpret_cast<const char*>(&x), sizeof(x));
    }
    {
        std::ifstream in(fname, std::ios::binary);
        int y = 0;
        in.read(reinterpret_cast<char*>(&y), sizeof(y));
        std::cout << std::hex << "read: 0x" << y << std::dec << std::endl;
    }
    return 0;
}
