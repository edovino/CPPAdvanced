#include <iostream>
#include <chrono>
#include <thread>

bool logToFile = false;

void uploadWithProgress(int* data, int size, void (* progressFunc)(int, int)) {
    // dummy implementatie
    for (int i = 0; i < 5; ++i) {
        (*progressFunc)(size / 5 * i, size);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    (*progressFunc)(size, size);
}

void progress(int current, int total) {
    std::cout << "Uploaded " << current << " van " << total << std::endl;
}

void progressToFile(int current, int total) {
    std::cout << "IN EEN FILE: Uploaded " << current << " van " << total << std::endl;
}

int main(int argc, char* arg[]) {
    if (argc > 1 && std::string(arg[1]) == "file") {
        logToFile = true;
    }

    int* data;

    // definieer function-pointer variabele
    void (* myProgress)(int, int);

    // afhankelijk van de boolean, set function-pointer variabele naar adres van een van de twee functies
    if (logToFile) {
        myProgress = &progressToFile;
    } else {
        myProgress = &progress;
    }

    uploadWithProgress(data, 100, myProgress);

    return 0;
}