#pragma once

#include <string>

class Dinosaur {
    public:
        Dinosaur(std::string name);

        Dinosaur();

        std::string getName();

    private:
        std::string name;
};

