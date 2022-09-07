#include <iostream>
#include <array>

int main() {

    int t{0};
    std::cin >> t;
    std::array<long long int, 61> fibonacci_sequence;

    for (int i = 0; i < 61; i++) {
        
        if (i == 0) {
            fibonacci_sequence[i] = 0;
        }
        else if ( i == 1) {
            fibonacci_sequence[i] = 1;
        }
        else{
            fibonacci_sequence[i] = fibonacci_sequence[i - 1] + fibonacci_sequence[i - 2]; 
        }  
    }

    while (t != 0) {

        int num_verify{0};

        std::cin >> num_verify;
        std::cout << "Fib(" << num_verify << ") = " << fibonacci_sequence[num_verify] << "\n";

        t --;
    }
    
    
    

    return 0;
}
