#include <iostream>
#include <fstream>

int main() {
    const char* fname = "sample.txt";
    {
        std::ofstream out(fname);
        out << "Hello file" << std::endl;
    }
    std::ifstream in(fname);
    std::string s;
    std::getline(in, s);
    std::cout << "Read: " << s << std::endl;
    return 0;
}
