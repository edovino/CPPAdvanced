#pragma once


#include "BTWBerekening.h"

class NederlandseBTWBerekening : public BTWBerekening {
    public:
        float geefBTW(int type, float bedrag) override;

};

