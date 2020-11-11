#include <iostream>
#include "Ship.h"

int main() {
    Ship ship("Maersk1", 15000);

    Container container1 = Container(10, "red");
    Container container2 = Container(20, "blue");
    Container container3 = Container(15, "green");

    ship = ship + container1;
    std::cout << ship.getName()
              << " containers=" << ship.getNumberOfContainers()
              << " load=" << ship.getLoad()
              << std::endl;

    ship += container1;
    std::cout << ship.getName()
              << " containers=" << ship.getNumberOfContainers()
              << " load=" << ship.getLoad()
              << std::endl;

    ship = ship + container2;
    std::cout << ship.getName()
              << " containers=" << ship.getNumberOfContainers()
              << " load=" << ship.getLoad()
              << std::endl;

    ship = ship + container3;
    std::cout << ship.getName()
              << " containers=" << ship.getNumberOfContainers()
              << " load=" << ship.getLoad()
              << std::endl;

    ship = ship - container3;
    std::cout << ship.getName()
              << " containers=" << ship.getNumberOfContainers()
              << " load=" << ship.getLoad()
              << std::endl;

    return 0;
}