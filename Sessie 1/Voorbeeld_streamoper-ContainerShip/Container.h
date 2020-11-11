#pragma once

#include <string>

class Container {
    public:
        Container(int capacity);
        int getCapacity() const;

    private:
        int capacity;
};

