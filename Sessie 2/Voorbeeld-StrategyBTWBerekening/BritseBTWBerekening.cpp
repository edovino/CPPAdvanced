#include "BritseBTWBerekening.h"

BritseBTWBerekening::BritseBTWBerekening() {}

BritseBTWBerekening::~BritseBTWBerekening() {
}

float BritseBTWBerekening::geefBTW(int type, float bedrag) {
    if (type == BTWBerekening::VERKOOP_TYPE_VOEDSEL) {
        return bedrag * 0.05;
    } else if (type == BTWBerekening::VERKOOP_TYPE_BOEKEN) {
        return 0;
    } else {
        return bedrag * 0.20;
    }
}
