#include <iostream>
#include <iomanip>
#include <array>

int main() {

    int value = 0;

    std::array<int, 7> cedules = {100, 50, 20, 10, 5, 2, 1};
    std::array<int, 7> my_cedules;

    std::cin >> value;

    int start_value = value;
    int num_cedules = 0;

    int i = 0;
    while (i < 7) {

        if (value >= cedules[i]) {

            value = value - cedules[i];
            num_cedules++;
        }
        else {

            my_cedules[i] = num_cedules;  
            i++;
            num_cedules = 0;
        }
    }

    std::cout << start_value << "\n";
    for (int j = 0; j < 7; j++) {

        std::cout << my_cedules[j] << " nota(s) de R$ " << cedules[j] << ",00" << "\n";
    }
    

    return 0;
}