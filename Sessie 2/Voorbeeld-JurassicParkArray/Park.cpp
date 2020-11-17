#include "Park.h"

#include <iostream>

Park::Park() {}

void Park::addDinosaur(Dinosaur d) {
    dinosaurs[count] = d;
    count++;
}

void Park::list() {
    std::cout << "----- In the park:" << std::endl;

    for (int i = 0; i < count; ++i) {
        std::cout << dinosaurs[i].getName() << std::endl;
    }

    std::cout << "-----" << std::endl;
}

void Park::openGate() {
    for (int i = 0; i < count; ++i) {
        if (dinosaurs[i].getName() == "Velociraptor") {
            std::cout << "Escaped: " << dinosaurs[i].getName() << std::endl;
            for (int j = i; j < count - 1; j++) {
                dinosaurs[j] = dinosaurs[j + 1];
            }
            count--;
        }
    }
}
