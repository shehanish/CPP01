/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:27:53 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 20:24:09 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"    // Include the Zombie class header


int main() 
{
//horde_5
    std::cout << "--- Testing zombieHorde with N = 5, name = 'Bob' ---" << std::endl;
    Zombie* horde1 = zombieHorde(5, "Bob"); // Create a horde of 5 Bobs

    if (horde1) { // Check if allocation was successful
        for (int i = 0; i < 5; ++i) {
            horde1[i].announce(); // Make each Bob announce itself
        }
        delete[] horde1; // Deallocate the entire horde
        std::cout << "Horde 1 deallocated." << std::endl;
    } else {
        std::cout << "Horde 1 creation failed." << std::endl;
    }

//horde_4
	std::cout << ".. Testing Zombie with N = 4, name = 'Shehi' ---" << std::endl;
	Zombie *horde4 = zombieHorde(4, "Shehi");

	if(horde4)
	{
		for(int i = 0; i < 4; i++)
		{
			horde4[i].announce();
		}
		delete[] horde4; //deallocating the entire 
        std::cout << "horde4 is deallocated" << std::endl;
	}
    else
    {
        std::cout << "horde4 creation failed." << std::endl;
    }
    
//horde_2
    std::cout << "\n--- Testing zombieHorde with N = 3, name = 'Alice' ---" << std::endl;
    Zombie* horde2 = zombieHorde(3, "Alice"); // Create a horde of 3 Alices

    if (horde2) {
        for (int i = 0; i < 3; ++i) {
            horde2[i].announce(); // Make each Alice announce itself
        }
        delete[] horde2; // Deallocate the entire horde
        std::cout << "Horde 2 deallocated." << std::endl;
    } else {
        std::cout << "Horde 2 creation failed." << std::endl;
    }
    
//horde_3
    std::cout << "\n--- Testing zombieHorde with N = 0 (invalid case) ---" << std::endl;
    Zombie* horde3 = zombieHorde(0, "Invalid"); // Test with N = 0
    if (!horde3) {
        std::cout << "Horde 3 correctly handled invalid N (returned NULL)." << std::endl;
    }

    std::cout << "\n--- End of main ---" << std::endl;
    return 0;
}