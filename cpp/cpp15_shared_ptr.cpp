#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> a = std::make_shared<int>(100);
    std::shared_ptr<int> b = a;
    std::cout << "use_count: " << a.use_count() << " value: " << *b << std::endl;
    return 0;
}
