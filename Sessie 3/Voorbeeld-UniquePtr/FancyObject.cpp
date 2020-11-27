#include "FancyObject.h"

#include <iostream>

FancyObject::FancyObject() {
    this->name = "noname";
}

FancyObject::FancyObject(std::string name) {
    this->name = name;
    std::cout << "ctor " << this << " " << name << std::endl;
}

FancyObject::~FancyObject() {
    std::cout << "dtor " << this << " " << name << std::endl;
}

FancyObject::FancyObject(const FancyObject& other) {
    this->name = other.name;
}

FancyObject& FancyObject::operator=(const FancyObject& other) {
    this->name = other.name;
    return *this;
}