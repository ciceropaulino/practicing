#include <iostream>
#include <cctype>
#include <utility>

int main() {

    std::string password;

    while(std::getline(std::cin, password)) {

        bool has_upper_case{false};
        bool has_lower_case{false};
        bool has_number{false};
        bool found_invalid_char{false};

        if(password.size() < 6 or password.size() > 32) {

            std::cout << "Senha invalida.\n";
            continue;
        }
        else {
            for (const auto& character : password) {

                if (std::isalpha(character)) {

                    if (std::isupper(character)) {

                        has_upper_case = true;
                    }
                    else {

                        has_lower_case = true;
                    }
                }
                else if (std::isdigit(character)) {

                    has_number = true;
                }
                else {

                    found_invalid_char = true;
                } 
            } 
        }
    }

    return 0;
}