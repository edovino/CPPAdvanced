#include <iostream>
#include <thread>
#include <condition_variable>

std::condition_variable flag;
std::mutex mutex;

int value = 100;
bool notified = false;

void calculateValue() {
    // waste some time...
    std::this_thread::sleep_for(std::chrono::seconds(4));
    value = 20;

    flag.notify_one();
    notified = true;
}

void reportValue() {
    // this is the "busy loop" version:
//    while (!notified) {
//        std::cout << "Waiting for value" << std::endl;
//    }

    // this is the 'notify/lock' version
    std::unique_lock<std::mutex> lock(mutex);
    while (!notified) {
        std::cout << "Waiting for value" << std::endl;
        flag.wait(lock);
    }

    std::cout << "The value is " << value << std::endl;
}

int main() {
    std::thread reportThread(reportValue);
    std::thread calculateThread(calculateValue);

    reportThread.join();
    calculateThread.join();
    return 0;
}