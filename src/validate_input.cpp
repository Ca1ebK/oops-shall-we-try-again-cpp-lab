#include "validate_input.hpp"

int validate_input(int lower_bound, int upper_bound,
                   std::string prompt, std::string error_message) {

    int input;

    while (true) {
        std::cout << prompt << std::endl;
        std::cin >> input;

        // Check for bad input (overflow or non-integer)
        if (std::cin.fail()) {
            std::cin.clear(); // clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
            std::cout << "Input is either too large, too small, or not an integer. Please enter an integer.\n";
            continue;
        }

        // Check range
        if (input < lower_bound || input > upper_bound) {
            std::cout << error_message << std::endl;
            continue;
        }

        break; // valid input, exit loop
    }

    std::cout << "The value that was chosen by the user is " << input << std::endl;
    return input;
}
