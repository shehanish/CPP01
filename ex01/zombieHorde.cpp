/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:57:01 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 19:42:45 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if(N <= 0)
	{
		std::cout << "Error: number of Zombies should be positive!" << std::endl;
		return(NULL);
	}
	 // Allocate N Zombie objects in a single block of memory
  // This implicitly calls the default constructor for each Zombie object
  //DECLARE horde AS POINT	
	Zombie* horde = new Zombie[N];

	for(int i = 0; i < N; ++i)
	{
		horde[i].setName(name);
	}
	return(horde);
}