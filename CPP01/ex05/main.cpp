#include "Harl.hpp"

int main() {
    Harl harl;

    // Examples of using Harl to complain at different levels
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    // Test with an unknown level
    harl.complain("CRITICAL");

    return 0;
}