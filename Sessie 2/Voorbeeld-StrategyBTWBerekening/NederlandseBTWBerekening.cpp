#include "NederlandseBTWBerekening.h"

float NederlandseBTWBerekening::geefBTW(int type, float bedrag) {
    if (type == BTWBerekening::VERKOOP_TYPE_VOEDSEL) {
        return bedrag * 0.09;
    } else if (type == BTWBerekening::VERKOOP_TYPE_BOEKEN) {
        return bedrag * 0.21;
    } else {
        return bedrag * 0.21;
    }
}
