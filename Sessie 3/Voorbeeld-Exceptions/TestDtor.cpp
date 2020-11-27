#include <iostream>
#include "TestDtor.h"

TestDtor::TestDtor() {}

TestDtor::~TestDtor() {
    std::cout << "TestDTOR called" << std::endl;
}
