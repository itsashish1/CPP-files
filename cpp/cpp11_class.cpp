#include <iostream>
#include <string>

class Person {
public:
    Person(std::string n, int a) : name(std::move(n)), age(a) {}
    void greet() const { std::cout << "Hi, I'm " << name << " (" << age << ")\n"; }
private:
    std::string name;
    int age;
};

int main() {
    Person p("Eve", 28);
    p.greet();
    return 0;
}
