/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 21:14:45 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/12 11:55:48 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define WEAPON_HPP

#include <string>

// Weapon class represents a weapon with a type (e.g., sword, club)
class Weapon
{
	private:
		// The type of the weapon
		std::string type;

	public:
		// Constructor to initialize the weapon with a type
		Weapon(const std::string& type);

		// Sets the type of the weapon
		void setType(const std::string& _type);

		// Returns the type of the weapon
		const std::string& getType() const;
};

#endif