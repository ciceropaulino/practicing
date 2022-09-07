#include <iostream>

int main() {

    int x = 0, y = 0;
    int min = 0, max = 0;
    int sum_odd = 0; 

    std::cin >> x;
    std::cin >> y;

    if(x < y) {
        min = x;
        max = y;
    }
    else {
        max = x;
        min = y;
    }
    

    for (int  i = (min + 1); i < max; i++) {
        if (i % 2 != 0) {
           sum_odd += i;
        }
    }
    
    std::cout << sum_odd << '\n';


    return 0;
}