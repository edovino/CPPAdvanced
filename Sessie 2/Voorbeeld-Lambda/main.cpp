#include <iostream>
#include <chrono>
#include <thread>

// lambda op de plek van een function pointer
void uploadWithProgress(int* data, int size, void (*progressFunc)(int, int)) {
//     dummy
    for (int i = 0; i < 5; ++i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        (*progressFunc)(size / 5 * i, size);
    }
}

template<typename T>
void uploadWithProgress(int* data, int size, T predicate) {
    // dummy
    for (int i = 0; i < 5; ++i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        predicate(size / 5 * i, size);
    }
}

int main() {
    int* data;
    int colour;

    // definieer een lambda functie
    auto lambda = [](int current, int total) -> void {
        std::cout << "Uploaded " << current << " van " << total << std::endl;
    };

    // lambda's werken zowel op de plek van een function-pointer, als een getemplate functie
    uploadWithProgress(data, 100, lambda);

    return 0;
}