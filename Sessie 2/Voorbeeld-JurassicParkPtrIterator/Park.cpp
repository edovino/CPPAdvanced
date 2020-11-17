#include "Park.h"

#include <iostream>

Park::Park() {}

void Park::addDinosaur(Dinosaur* d) {
    dinosaurs.push_back(d);
}

void Park::list() {
    std::cout << "----- In the park:" << std::endl;

    std::vector<Dinosaur*>::iterator it = dinosaurs.begin();
    while (it != dinosaurs.end()) {
        std::cout << (*it)->getName() << std::endl;
        it++;
    }

//     dit kan ook:
//    for (int i = 0; i < dinosaurs.size(); ++i) {
//        std::cout << dinosaurs[i]->getName() << std::endl;
//    }

    std::cout << "-----" << std::endl;
}

void Park::openGate() {
    std::vector<Dinosaur*>::iterator it = dinosaurs.begin();

    while (it != dinosaurs.end()) {
        if ((*it)->getName() == "Velociraptor") {
            std::cout << "Escaped: " << (*it)->getName() << std::endl;
            delete *it;
            it = dinosaurs.erase(it);
        } else {
            it++;
        }
    }
}

Park::~Park() { // destructor - ruim aangemaakte heap-objecten op
    std::vector<Dinosaur*>::iterator it = dinosaurs.begin();
    while (it != dinosaurs.end()) {
        delete *it;
        it++;
    }
}