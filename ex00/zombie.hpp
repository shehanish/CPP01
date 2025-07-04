/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:28:00 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 17:32:09 by shkaruna         ###   ########.fr       */
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
		Zombie(std::string name);
    	void	announce(void);
    	~Zombie();
		
};
	
Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif