/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:14:30 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/12 11:59:49 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB()
{
	std::cout << name << " is no longer fighting" << std::endl;
}

void	HumanB::setWeapon(Weapon& Weapon)
{
	this->weapon = &Weapon;
}
void HumanB::attack() const
{
	if(weapon)
		std::cout << name << " attack with their " << weapon->getType() << std::endl;
		
	else
		std::cout << name << " has no weapon to attack with! " << std::endl;
		
}
//Needs setWeapon() method to assign later