#include <iostream>
#include "Park.h"

int main() {
    Park jurassicPark = Park();

    jurassicPark.addDinosaur(Dinosaur("Allosaurus"));
    jurassicPark.addDinosaur(Dinosaur("Megalodon"));
    jurassicPark.addDinosaur(Dinosaur("Tyrannosaurus Rex"));
    jurassicPark.addDinosaur(Dinosaur("Velociraptor"));
    jurassicPark.addDinosaur(Dinosaur("Stegosaurus"));

    jurassicPark.list();
    jurassicPark.openGate();
    jurassicPark.list();

    return 0;
}