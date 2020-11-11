#include <iostream>
#include <fstream>
#include "Config.h"

int main() {
    Config config1 = Config("firstconfig");
    config1["key1"] = "value1";
    config1["key2"] = "value2";

    std::cout << config1["key1"] << std::endl;
    std::cout << config1["key3"] << std::endl;

    std::cout << config1 << std::endl;

    Config config2 = Config("secondconfig");
    std::cout << "Config2: (vers)" << config2 << std::endl;

    config2["key3"] = "value3";
    std::cout << "Config1:" << config1 << std::endl;
    std::cout << "Config2:" << config2 << std::endl;

    std::ofstream output;
    output.open("saveconfig");
    output << config1 << std::endl;
    output.close();

    return 0;
}