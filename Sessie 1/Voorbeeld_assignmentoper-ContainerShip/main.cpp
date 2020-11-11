
#include <iostream>
#include "Ship.h"

int main() {
    Ship ship = Ship("Maersk1", 15000);

    Container container1 = Container(10, "red");
    Container container2 = Container(20, "blue");
    Container container3 = Container(15, "green");

    ship = ship + container1;
    cout << ship.getName() << " load=" << ship.getLoad() << ", containers=" << ship.getNumberOfContainers() << endl;

    ship += container1;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    ship = ship + container2;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    ship = ship + container3;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    ship = ship - container3;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    Ship ship2 = Ship("Maersk2", 15000);
    cout << ship2.getName() << " load=" << ship2.getLoad() << ", containers=" << ship2.getNumberOfContainers() << endl;
    ship2 = ship;

    cout << ship2.getName() << " load=" << ship2.getLoad() << ", containers=" << ship2.getNumberOfContainers() << endl;

    return 0;
}
