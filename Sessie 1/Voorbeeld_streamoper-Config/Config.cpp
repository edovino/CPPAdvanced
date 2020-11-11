#include "Config.h"

Config::Config(std::string name) {
    this->name = name;
}

std::string& Config::operator[](std::string key) {
    return entries[key];
}

std::ostream& operator<<(std::ostream& os, const Config& config) {
    os << "# Configfile: " << config.name << std::endl;
    for (const auto& item : config.entries) {
        os << "  " << item.first << "=" << item.second << std::endl;
    }

    return os;
}

std::istream& operator>>(std::istream& is, const Config& config) {
    std::string dummy, key, value;
    is >> dummy >> config.name;
//    while (!is.eof()) {
//        is >> key >> value;
//    }

    return is;
}