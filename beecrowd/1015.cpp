#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double x_1 = 0, x_2 = 0;
    double y_1 = 0, y_2 = 0;

    std::cin >> x_1;
    std::cin >> y_1;
    std::cin >> x_2;
    std::cin >> y_2;

    //std::cout << x_1 << " " << x_2 << " " << y_1 << " " << y_2;

    double  distance = sqrt(pow((x_2 - x_1), 2) + pow((y_2 - y_1), 2));

    std::cout << std::fixed << std::setprecision(4) << distance;

    return 0;
}