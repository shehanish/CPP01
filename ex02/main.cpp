/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 20:27:16 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/10 21:08:03 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * This exercise is straightforward and aims to visually demonstrate the relationship
 * between a variable, a pointer to it, and a reference to it in terms of their memory
 * addresses and the values they access.
 */

#include <string>
#include <iostream>
 
int main()
{
	std::string myBrain = "HI THIS IS BRAIN";

	std::string *stringPTR = &myBrain; //stringPTR holds the memory address of myBrain
	std::string &stringREF = myBrain; //stringREF is an alias to for myString
	
	std::cout << " ------Memory Addresses-----" << std::endl;
	std::cout << "Memory address of myString:  " << &myBrain << std::endl;

	// When you print a pointer directly, it typically prints the address it holds.
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	
	// The memory address held by stringREF
    // A reference IS the original variable, so taking its address gives the original variable's address.
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << std::endl; // For a newline separator

    // --- Printing Values ---
    std::cout << "--- Values ---" << std::endl;

    // The value of the string variable.
    std::cout << "Value of myString:  " << myBrain << std::endl;

    // The value pointed to by stringPTR.
    // Use the dereference operator (*) to get the value at the address stringPTR holds.
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;

    // The value pointed to by stringREF.
    // Use the reference directly, just like the original variable.
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}