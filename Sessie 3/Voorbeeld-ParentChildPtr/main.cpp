#include <iostream>
#include "Parent.h"

int main() {

    Parent* p1 = new Parent("Parent1");
    std::cout << "P1:" << *p1 << std::endl;

    Parent* p2 = new Parent(*p1); // roept de copy constructor aan - kopieert de child pointer!
    std::cout << "P2:" << *p2 << std::endl;

    Parent* p3 = new Parent("Parent3");
    std::cout << "P3:" << *p3 << std::endl;

    *p3 = *p1; // roept de assignment operator aan
    std::cout << "P3:" << *p3 << std::endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}