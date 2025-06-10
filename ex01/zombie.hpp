/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:28:00 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 20:03:34 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
    	std::string _name;
		
	public:
		Zombie();
		Zombie(std::string name); //initialiaze the zombie with a name
    	void	announce(void); //method to make Zombie annouce itself
    	~Zombie(); //destructor
		void	setName(std::string name);		
};

Zombie* zombieHorde( int N, std::string name );
	


#endif