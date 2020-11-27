#include "FancyObject.h"

#include <iostream>

FancyObject::FancyObject() {
    this->name = "noname";
}

FancyObject::FancyObject(string name) {
    this->name = name;
    cout << "ctor " << this << " " << name << endl;
}

FancyObject::~FancyObject() {
    cout << "dtor " << this << " " << name << endl;
}