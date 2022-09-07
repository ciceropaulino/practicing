#include <iostream>
#include <iomanip>

int main() {

    double A = 0, B = 0;
    double MEDIA = 0;

    std::cin >> A;  
    std::cin >> B;

    MEDIA =  (A * 3.5 + B * 7.5) / 11;

    std::cout  << std::fixed << std::setprecision(5) << "MEDIA = " <<  MEDIA << "\n";

    return 0;
}