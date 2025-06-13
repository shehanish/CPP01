/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:14:20 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/12 11:59:18 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA()
{
	std::cout << name << " is no longer fighting" << std::endl;
}
void HumanA::attack() const
{
	std::cout << name << " attack with their " << weapon.getType() << std::endl;
}