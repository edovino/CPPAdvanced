
#include "Verkoop.h"
#include "BritseBTWBerekening.h"
#include "NederlandseBTWBerekening.h"

BTWBerekening* berekeningVoorLand() {
    return new NederlandseBTWBerekening();
//    return new BritseBTWBerekening();
}

int main() {
    BTWBerekening *berekening = berekeningVoorLand();

    Verkoop *verkoop1 = new Verkoop(BTWBerekening::VERKOOP_TYPE_BOEKEN, 74.25);
    Verkoop *verkoop2 = new Verkoop(BTWBerekening::VERKOOP_TYPE_KLEDING, 148.50);
    Verkoop *verkoop3 = new Verkoop(BTWBerekening::VERKOOP_TYPE_VOEDSEL, 22.30);

    verkoop1->berekenBTW(berekening);
    verkoop2->berekenBTW(berekening);
    verkoop3->berekenBTW(berekening);

    delete verkoop1;
    delete verkoop2;
    delete verkoop3;

    delete berekening;
}
