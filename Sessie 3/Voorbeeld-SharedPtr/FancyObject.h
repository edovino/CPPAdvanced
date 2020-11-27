#pragma once

#include <string>

using namespace std;

class FancyObject {
    public:
        FancyObject();
        FancyObject(string name);

        virtual ~FancyObject();

    private:
        string name;
};

