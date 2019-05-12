#include "user_interaction.h"

float UserInteraction::promptUser(std::string question) {
    float UserInput;

    std::cout << "Please enter your " << question << "position" << std::endl;
    std::cin >> UserInput;

    return UserInput;
}

float UserInteraction::promptUserForValidInput(std::string msg) {
    float value = -1;
    do {
        std::cout << "Enter a value between 1 and 100\n" << std::endl;
        value = promptUser(msg);
    } while (value < 0 || value > 100);

    return value;
    
}
