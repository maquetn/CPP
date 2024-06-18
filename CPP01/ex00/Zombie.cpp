#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " destroyed!" << std::endl;
}
