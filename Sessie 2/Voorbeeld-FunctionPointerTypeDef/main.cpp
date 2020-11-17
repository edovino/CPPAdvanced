#include <iostream>
#include <chrono>
#include <thread>

// een typedef maakt de code leesbaarder, maar functionaliteit exact hetzelfde
typedef void (* progressFunc)(int, int);

void uploadWithProgress(int* data, int size, progressFunc myProgressFunction) {
    // dummy implementatie
    for (int i = 0; i < 5; ++i) {
        myProgressFunction(size / 5 * i, size);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    myProgressFunction(size, size);
}

void progress(int current, int total) {
    std::cout << "Uploaded " << current << " van " << total << std::endl;
}

void progressToFile(int current, int total) {
    std::cout << "IN EEN FILE: Uploaded " << current << " van " << total << std::endl;
}

int main(int argc, char* arg[]) {
    bool logToFile = false;

    if (argc > 1 && std::string(arg[1]) == "file") {
        logToFile = true;
    }
    int* data;

    progressFunc myProgressFunction; // definieer function-pointer variabele, nu n.a.v. typedef

    // afhankelijk van de boolean, set function-pointer variabele naar adres van een van de twee functies
    if (logToFile) {
        myProgressFunction = &progressToFile;
    } else {
        myProgressFunction = &progress;
    }

    uploadWithProgress(data, 100, myProgressFunction);

    return 0;
}