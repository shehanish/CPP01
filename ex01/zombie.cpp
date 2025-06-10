/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:27:46 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 19:08:51 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


/**
 * @brief Default constructor for the Zombie class.
 *
 * Initializes a new Zombie object with the default name "Default Zombie".
 * Outputs a message to the standard output indicating that a new zombie
 * has been created using the default constructor.
 */
Zombie::Zombie() : _name("Default Zombie")
{
	std::cout << "A new zombie has been created (default constructor)" << std::endl;
}

// Constructor
Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie" << _name << "has been created" << std::endl;
}

// Member function: announce
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed" << std:: endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}