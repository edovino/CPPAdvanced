#include "Container.h"

Container::Container(int capacity, std::string colour) {
    this->capacity = capacity;
    this->colour = colour;
}

const std::string& Container::getColour() const {
    return colour;
}

int Container::getCapacity() const {
    return capacity;
}


