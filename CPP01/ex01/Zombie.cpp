#include "Zombie.hpp"

Zombie::Zombie() {
    // Default constructor for std::string automatically initializes it to empty
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::setName(const std::string& newName) {
    name = newName;
}

void Zombie::announce() const {
    std::cout << name << " Braiiiiiiinnnssss..." << std::endl;
}
