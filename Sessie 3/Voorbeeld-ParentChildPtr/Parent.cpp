#include <iostream>
#include "Parent.h"

Parent::Parent(std::string name) {
    this->name = name;
    std::string childName = "ChildOf" + name;
    this->child = new Child(childName);
}

Parent::Parent(const Parent& other) {
    std::cout << "Parent cctor" << std::endl;
    this->name = other.name;
    this->child = new Child(*other.child);
}

Parent::~Parent() {
    delete this->child;
}

Parent& Parent::operator=(const Parent& other) {
    std::cout << "Parent assignment" << std::endl;

    if (this == &other) {
        return *this;
    }

    this->name = other.name;
    delete this->child;
    this->child = new Child(*other.child);

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Parent& parent) {
    os << "name: " << parent.name << " child: " << *parent.child;
    return os;
}
