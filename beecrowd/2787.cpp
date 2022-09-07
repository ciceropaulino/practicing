#include <iostream>

int main() {

    int line{0}, colunm{0};

    std::cin >> line;
    std::cin >> colunm;

    if (line == colunm) {
        
        std::cout << "1\n";
    }
    else if ((line % 2) == 0 && (colunm % 2) == 0 ) {
        
        std::cout << "1\n";
    }
    else if ((line % 2) == 0 && (colunm % 2) != 0 ) {
        
        std::cout << "0\n";
    }
    else if ((line % 2) != 0 && (colunm % 2) != 0 ) {
        
        std::cout << "1\n";
    }
    else if ((line % 2) != 0 && (colunm % 2) == 0 ) {
        
        std::cout << "0\n";
    }
    else std::cout << "ERROR!";
    
    
    

    return 0;
}