/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:27:46 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 17:54:10 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
	this->_name = name;
}

// Member function: announce
void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << _name << " is destroyed" << std:: endl;
}