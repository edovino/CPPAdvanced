#pragma once

#include <string>
#include "Container.h"

class Ship {

    public:
        Ship(std::string name, int load = 0, int numberOfContainers = 0);
        virtual ~Ship();

        const std::string& getName() const;
        const int getNumberOfContainers() const;
        const int getLoad() const;

        Ship operator+(const Container& container) const;
        Ship operator-(const Container& container) const;
        Ship& operator+=(const Container& container);

        friend std::ostream& operator<<(std::ostream& os, const Ship& ship);

    private:
        std::string name;
        int load;
        int numberOfContainers;
};