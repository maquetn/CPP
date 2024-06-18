#include "Harl.hpp"
#include <iostream>

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(const std::string& level) {
    // Define pointers to member functions
    void (Harl::*complaintFunc)() = nullptr;

    // Assign the appropriate member function based on the level
    if (level == "DEBUG") {
        complaintFunc = &Harl::debug;
    } else if (level == "INFO") {
        complaintFunc = &Harl::info;
    } else if (level == "WARNING") {
        complaintFunc = &Harl::warning;
    } else if (level == "ERROR") {
        complaintFunc = &Harl::error;
    } else {
        std::cout << "Unknown complaint level: " << level << std::endl;
        return;
    }

    // Call the selected member function
    (this->*complaintFunc)();
}