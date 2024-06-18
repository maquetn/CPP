#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->_name << " " << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	announce();
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "Destroyed" << this->_name << std::endl;
}