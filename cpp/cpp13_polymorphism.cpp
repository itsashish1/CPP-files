#include <iostream>
#include <memory>

struct Shape { virtual double area() const = 0; virtual ~Shape() = default; };
struct Circle : Shape { double r; Circle(double r):r(r){} double area() const override { return 3.141592653589793 * r * r; } };

int main() {
    std::unique_ptr<Shape> s = std::make_unique<Circle>(2.0);
    std::cout << "Area: " << s->area() << std::endl;
    return 0;
}
