/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:14:42 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/12 11:24:45 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
    this->type = type;
}

void	Weapon::setType(const std::string& _type)
{
	this->type = _type;
}

const std::string& Weapon::getType() const
{
    return this->type;
}
