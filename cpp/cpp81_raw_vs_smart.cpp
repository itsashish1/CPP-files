#include <iostream>
#include <memory>

int main(){
    int* raw = new int(5);
    std::unique_ptr<int> up(new int(10));
    std::cout << "raw: " << *raw << " unique: " << *up << std::endl;
    delete raw;
    return 0;
}
