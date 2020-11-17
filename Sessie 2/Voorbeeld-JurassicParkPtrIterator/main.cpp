#include <iostream>
#include "Park.h"

int main() {
    Park jurassicPark = Park();

    jurassicPark.addDinosaur(new Dinosaur("Allosaurus"));
    jurassicPark.addDinosaur(new Dinosaur("Megalodon"));
    jurassicPark.addDinosaur(new Dinosaur("Tyrannosaurus Rex"));
    jurassicPark.addDinosaur(new Dinosaur("Velociraptor"));
    jurassicPark.addDinosaur(new Dinosaur("Stegosaurus"));

    jurassicPark.list();
    jurassicPark.openGate();
    jurassicPark.list();

    return 0;
}