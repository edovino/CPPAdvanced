#include "Dinosaur.h"

Dinosaur::Dinosaur() {}

Dinosaur::Dinosaur(std::string name) : name(name){
}

std::string Dinosaur::getName() {
    return name;
}
