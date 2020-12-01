#include <iostream>
#include <vector>
#include <thread>

int total = 0;

void square(int x) {
    total += x * x;
}

void calculate() {
    std::vector<std::thread> threads;
    for (int i = 1; i <= 100; i++) {
        threads.push_back(std::thread(&square, i));
    }

    for (auto& thread : threads) {
        thread.join();
    }
    std::cout << "total = " << total << std::endl;
}

int main() {
    for (int i = 0; i < 2000; ++i) {
        total = 0;
        calculate();
    }

    return 0;
}