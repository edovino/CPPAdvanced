#include <iostream>
#include "Verkoop.h"

Verkoop::Verkoop(int type, float price) : bedrag(price), type(type) {
}

Verkoop::~Verkoop() {
}

void Verkoop::berekenBTW(BTWBerekening* berekening) {
    float btw = berekening->geefBTW(type, bedrag);

    float totaalPrijs = bedrag + btw;

    std::cout << "Totaal : " << totaalPrijs << std::endl;
    std::cout << "   BTW : " << btw << std::endl;
}
