/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:27:53 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 17:39:02 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main()
{
	Zombie* heap_zombie	= newZombie("Foo");
	heap_zombie->announce();

	randomChump("stack_zombie");
	
	delete(heap_zombie);
	return(0);
	
}