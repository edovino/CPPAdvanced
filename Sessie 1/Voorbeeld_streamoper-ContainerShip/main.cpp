#include <iostream>
#include "Ship.h"

int main() {
    Ship ship = Ship("Maersk1", 15000);

    Container container1 = Container(10);
    Container container2 = Container(20);
    Container container3 = Container(15);

    ship = ship + container1;
    std::cout << ship << std::endl;

    ship += container1;
    std::cout << ship << std::endl;

    ship = ship + container2;
    std::cout << ship << std::endl;

    ship = ship + container3;
    std::cout << ship << std::endl;

    ship = ship - container3;
    std::cout << ship << std::endl;

    return 0;
}