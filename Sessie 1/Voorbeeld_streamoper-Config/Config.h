#pragma once

#include <string>
#include <vector>
#include <ostream>
#include <map>

class Config {
    public:
        Config(std::string name);

        std::string& operator[](std::string key);

        friend std::ostream& operator<<(std::ostream& os, const Config& config);
        friend std::istream& operator>>(std::istream& is, const Config& config);

    private:
        std::string name;
        std::map<std::string, std::string> entries;
};

