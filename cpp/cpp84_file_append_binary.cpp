#include <iostream>
#include <fstream>

int main(){
    const char* fname = "append.bin";
    {
        std::ofstream out(fname, std::ios::binary | std::ios::app);
        int v = 0xdeadbeef;
        out.write(reinterpret_cast<const char*>(&v), sizeof(v));
    }
    std::cout << "appended" << std::endl;
    return 0;
}
