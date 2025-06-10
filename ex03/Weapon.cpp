/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:14:42 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 21:54:01 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&  Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType(const std::string& _type)
{
	this->type = _type;
}