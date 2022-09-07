#include <iostream>
#include <string>
#include <iomanip>

double commision(int percent, double sale_val);

int main (){

    std::string name{};

    double sale = 0;
    double salary= 0;
    double payment = 0;

    std::cin >> name;
    std::cin >> salary;
    std::cin >> sale;
    
    payment = commision(15, sale) + salary;

    std::cout << std::fixed << std::setprecision(2) << "TOTAL = R$ " <<  payment << "\n";

    return 0;
}

double commision(int percent, double sale_val) { 

    double commision_val = (sale_val * percent) / 100;

    return commision_val; 
}
