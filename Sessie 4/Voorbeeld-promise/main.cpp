#include <iostream>
#include <future>

//int square(int x) {
//    return x * x;
//}

void square(std::promise<int>* promise, int x) {
    int result = x * x;

    promise->set_value(result);
}

int main() {
    std::promise<int> promise;
    std::future<int> future = promise.get_future();

    std::thread thread(square, &promise, 15);
    thread.join();
    std::cout << "Result = " << future.get() << std::endl;

//    auto result = std::async(&square, 15);
//    std::cout << "result = " << result.get() << std::endl;

    return 0;
}