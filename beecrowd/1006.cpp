#include <iostream>
#include <iomanip>

int main() {

    double A = 0, B = 0, C = 0;
    double MEDIA = 0;

    std::cin >> A;  
    std::cin >> B;
    std::cin >> C;

    MEDIA =  (A*2 + B*3 + C*5) / 10;

    std::cout  << std::fixed << std::setprecision(1) << "MEDIA = " <<  MEDIA << "\n";

    return 0;
}