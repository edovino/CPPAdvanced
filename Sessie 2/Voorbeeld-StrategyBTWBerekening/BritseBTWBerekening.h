#pragma once


#include "BTWBerekening.h"

class BritseBTWBerekening : public BTWBerekening {
    public:
        BritseBTWBerekening();
        virtual ~BritseBTWBerekening();
        float geefBTW(int type, float bedrag) override;
};

