#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private: 
		const std::string	_name;

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	announce( void ) const;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif