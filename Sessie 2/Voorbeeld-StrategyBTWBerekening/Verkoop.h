#pragma once


#include "BTWBerekening.h"

class Verkoop {

    public:
        Verkoop(int type, float price);
        virtual ~Verkoop();

        void berekenBTW(BTWBerekening* berekening);

    private:
        float bedrag;
        int type;
};

