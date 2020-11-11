#pragma once

#include <string>

class Container {
    public:
        Container(int capacity, std::string colour);
        int getCapacity() const;

        const std::string& getColour() const;

    private:
        int capacity;
        std::string colour;
};

