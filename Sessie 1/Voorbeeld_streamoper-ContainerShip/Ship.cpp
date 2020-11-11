#include <iostream>
#include "Ship.h"

Ship::Ship(std::string name, int load, int numberOfContainers) {
    std::cout << "ctor: '" << name << "'" << std::endl;
    this->name = name;
    this->load = load;
    this->numberOfContainers = numberOfContainers;
}

Ship::~Ship() {
    std::cout << "dtor: " << std::endl;
}

const int Ship::getLoad() const {
    return load;
}

const int Ship::getNumberOfContainers() const {
    return numberOfContainers;
}

const std::string& Ship::getName() const {
    return name;
}

Ship Ship::operator+(const Container& container) const {
    return Ship(name, load + container.getCapacity(), numberOfContainers + 1);
}

Ship Ship::operator-(const Container& container) const {
    return Ship(name, load - container.getCapacity(), numberOfContainers - 1);
}

Ship& Ship::addContainer(const Container& container) {
    load += container.getCapacity();
    numberOfContainers++;
    return *this;
}

Ship& Ship::operator+=(const Container& container) {
    return this->addContainer(container);
}

std::ostream& operator<<(std::ostream& os, const Ship& ship) {
    os << ship.name
       << " containers=" << ship.numberOfContainers
       << " load=" << ship.load
       << std::endl;
    return os;
}

