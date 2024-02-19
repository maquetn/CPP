/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaquet <nmaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:34:07 by nmaquet           #+#    #+#             */
/*   Updated: 2024/02/19 15:40:44 by nmaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name) : name(name) {}
    
    void announce() const {
        std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    }

    ~Zombie() {
        std::cout << name << " destroyed!" << std::endl;
    }
};


Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif