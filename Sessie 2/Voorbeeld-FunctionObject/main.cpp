#include <iostream>
#include <chrono>
#include <thread>

// deze template-functie gebruikt een 'function object' als predicate (net als vele STL algorithmes)
template<typename T>
void uploadWithProgress(int* data, int size, T showProgress) {
    // dummy
    for (int i = 0; i < 5; ++i) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        showProgress(size / 5 * i, size);
    }
}

// twee function objects (functors)
class ProgressPrinter {
    public:
        void operator()(int current, int total) {
            std::cout << "Uploaded " << current << " van " << total << std::endl;
        }
};

class ProgressFilePrinter {
    public:
        void operator()(int current, int total) {
            std::cout << "Uploaded " << current << " van " << total << std::endl;
        }
};

int main(int argc, char* arg[]) {
    bool logToFile = false;

    if (argc > 1 && std::string(arg[1]) == "file") {
        logToFile = true;
    }

    int* data;

    if (logToFile) {
        ProgressFilePrinter f;
        uploadWithProgress(data, 100, f);
    } else {
        ProgressPrinter p;
        uploadWithProgress(data, 100, p);
    }

    return 0;
}