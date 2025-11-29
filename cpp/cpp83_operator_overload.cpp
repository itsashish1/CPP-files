#include <iostream>

struct Vec { int x,y; Vec(int a=0,int b=0):x(a),y(b){} };
Vec operator+(const Vec &a,const Vec &b){ return Vec(a.x+b.x,a.y+b.y); }

int main(){
    Vec a(1,2), b(3,4);
    Vec c = a + b;
    std::cout << c.x << ',' << c.y << std::endl;
    return 0;
}
