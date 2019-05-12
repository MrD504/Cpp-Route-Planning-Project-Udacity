#pragma once

#include <string>
#include <iostream>
#include <array>

class UserInteraction
{
    public:
        float promptUserForValidInput(std::string);
    private:
        float promptUser(std::string); 
};