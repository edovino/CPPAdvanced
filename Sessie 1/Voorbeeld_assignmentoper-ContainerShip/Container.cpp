#include "Container.h"

Container::Container(int capacity, string colour) {
    this->capacity = capacity;
    this->colour = colour;
}

int Container::getCapacity() const {
    return capacity;
}

const string& Container::getColour() const {
    return colour;
}
