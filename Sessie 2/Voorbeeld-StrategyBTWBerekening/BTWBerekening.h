#pragma once

class BTWBerekening {
    public:
        static const int VERKOOP_TYPE_KLEDING = 1;
        static const int VERKOOP_TYPE_BOEKEN = 2;
        static const int VERKOOP_TYPE_VOEDSEL = 3;

    public:
        virtual ~BTWBerekening();
        BTWBerekening();
        virtual float geefBTW(int type, float bedrag) = 0;
};