#include <iostream>
#include <string>
#include <array>

short qtd_leds(char digit) {

    if( digit == '0') {
        return 6;
    }
    else if (digit == '1') {
        return 2;
    }
    else if (digit == '2') {
        return 5;
    }
    else if (digit == '3') {
        return 5;
    }
    else if (digit == '4') {
        return 4;
    }
    else if (digit == '5') {
        return 5;
    }
    else if (digit == '6') {
        return 6;
    }
    else if (digit == '7') {
        return 3;
    }
    else if (digit == '8') {
        return 7;
    }
    else{
        return 6;
    }

}

int main() {

    short n {0};
    std::cin >> n;
    std::cin.ignore();
    std::string num;
    

    while (n != 0) {

        long n_leds{0};    
        std::getline(std::cin, num);

        for (size_t i = 0; i < num.size(); i++) {
            n_leds = n_leds + qtd_leds(num[i]);
        }
        std::cout << n_leds << " leds\n";

        n --;
    }
    
    return EXIT_SUCCESS;
}