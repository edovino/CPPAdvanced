#include <iostream>
#include <thread>

int result = 0;

void square(int x) {
    std::cout << "Hello from thread " << std::this_thread::get_id() << std::endl;
    result += x * x;
}

int main() {
    std::thread thread(&square, 25);

//    thread.join();
    thread.detach();

    std::cout << "accum = " << result << std::endl;

    return 0;
}
