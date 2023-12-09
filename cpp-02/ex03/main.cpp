#include <iostream>
#include "Point.hpp"

int main(void)
{
    const Point a(5.f, 0.f);
    const Point b(3.f, 3.f);
    const Point c(8.f, 3.f);
    const Point p1(4.f, 1.5f);
    const Point p2(3.f, 2.f);
    const Point p3(5.f, 2.f);
    const Point p4(5.0f, 0.f);
    const Point p5;

    std::cout << "p1 is " << (bsp(a, b, c, p1) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p2 is " << (bsp(a, b, c, p2) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p3 is " << (bsp(a, b, c, p3) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p3 is " << (bsp(a, b, c, p3) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p4 is " << (bsp(a, b, c, p4) ? "in" : "not in") << " the triangle" << std::endl;
    std::cout << "p5 is " << (bsp(a, b, c, p5) ? "in" : "not in") << " the triangle" << std::endl;
}
