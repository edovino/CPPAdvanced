#include <iostream>

// losse functies per type
/*
int biggest(int a, int b) {
    if (a > b) return a;
    return b;
}

float biggest(float a, float b) {
    if (a > b) return a;
    return b;
}

std::string biggest(std::string a, std::string b) {
    if (a > b) return a;
    return b;
}
*/


// template functie
template<typename T>
T biggest(T first, T second) {
    if (first > second) return first;
    return second;
}

int main() {

    for (int i: {1, 3, 180, 2, -15}) {
        std::cout << biggest<int>(i, 27) << std::endl;
//        cout << biggest(i, 2) << endl; // type inference
    }

    std::cout.precision(20);
    std::cout << biggest<float>(147.1543f, 234543.23423f) << std::endl;
//    cout << biggest(147, 234543.23423f) << endl; // type inference: selecteert <int>

    for (std::string s: {"aap", "noot", "mies", "boom", "roos", "vuur"}) {
        std::cout << biggest<std::string>(s, "henkie") << std::endl;
    }

    return 0;
}