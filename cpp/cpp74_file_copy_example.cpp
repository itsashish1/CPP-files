#include <iostream>
#include <filesystem>

int main(){
    namespace fs = std::filesystem;
    fs::path src = fs::current_path() / "sample.txt";
    fs::path dst = fs::current_path() / "sample_copy.txt";
    try{ fs::copy_file(src, dst, fs::copy_options::overwrite_existing); std::cout << "copied" << std::endl; }
    catch(const fs::filesystem_error &e){ std::cout << "error: " << e.what() << std::endl; }
    return 0;
}
