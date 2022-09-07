#include <iostream>
#include <algorithm>
#include <array>

int main() {

    std::array<int,20> numbers;

    for (int i = 0; i < 20; i++) {
        std::cin >> numbers[i];
    }
    for (int j = 0; j < 10; j++) {
        std::swap(numbers[j], numbers[19 - j]);
    }
    for (int k = 0; k < 20; k++) {
        std::cout << "N[" << k << "] = " << numbers[k] << "\n";
    }
    
    return 0;
}