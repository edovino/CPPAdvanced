#pragma once

#include <string>

class FancyObject {
    public:
        FancyObject();
        FancyObject(std::string name);

        virtual ~FancyObject();

        FancyObject(const FancyObject& other);

        FancyObject& operator=(const FancyObject& other);

    private:
        std::string name;
};

