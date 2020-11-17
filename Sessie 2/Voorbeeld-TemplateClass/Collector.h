#pragma once

#include <vector>
#include <iostream>


template<typename T>
class Collector {
    public:
        Collector() {
        }

        void add(T element) {
            elements.push_back(element);
        }

        void dump() {
            for (int i = 0; i < elements.size(); i++) {
                std::cout << elements[i] << std::endl;
            }
        }

    private:
        std::vector<T> elements;
};









/*
class Collector {
    public:
        Collector() {

        }

        void add(int element) {

        }

        void dump() {
            for (int i = 0; i < elements.size(); i++) {
                std::cout << elements[i] << std::endl;
            }
        }

    private:
        std::vector<int> elements;
};
*/