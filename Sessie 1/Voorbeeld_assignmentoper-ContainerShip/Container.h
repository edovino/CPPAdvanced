#pragma once

#include <string>

using namespace std;

class Container {
    public:
        Container(int capacity, string colour);

        int getCapacity() const;

        const string& getColour() const;

    private:
        int capacity;
        string colour;

};