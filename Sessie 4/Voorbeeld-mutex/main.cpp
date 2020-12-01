#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

int accum = 0;
std::mutex mutex;

void square(int x) {
    int tmp = x * x;

    // ...
    // code that's not protected by the lock

    {
        std::lock_guard<std::mutex> guard(mutex);
//        mutex.lock();
        accum += tmp;
//        mutex.unlock();
    }

    // more code that's not protected by the lock
}

void calculate() {
    std::vector<std::thread> threads;
    for (int i = 1; i <= 100; i++) {
        threads.push_back(std::thread(&square, i));
    }

    for (auto& th : threads) {
//        th.join();
        th.detach();
    }

    std::cout << "accum = " << accum << std::endl;
}

int main() {
    for (int i = 0; i < 2000; ++i) {
        accum = 0;
        calculate();
    }

    return 0;
}