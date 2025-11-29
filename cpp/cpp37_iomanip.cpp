#include <iostream>
#include <iomanip>

int main(){
    double pi = 3.141592653589793;
    std::cout << "Default: " << pi << '\n';
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Fixed(4): " << pi << '\n';
    std::cout << std::scientific << "Scientific: " << pi << '\n';
    return 0;
}
