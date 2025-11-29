#include <iostream>
#include <filesystem>

int main() {
    namespace fs = std::filesystem;
    fs::path p = fs::current_path();
    for (auto &e : fs::directory_iterator(p)) std::cout << e.path().filename().string() << '\n';
    return 0;
}
