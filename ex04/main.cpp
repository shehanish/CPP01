/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:55:19 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/12 14:56:42 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{

	if(argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return(1);
	}

	std::string filename = argv[1];
	std::string s1  = argv[2];
	std::string s2  = argv[3];

	if (s1.empty())
	{
		std::cerr << "Search string (s1) cannot be empty" << std::endl;
		return 1;
	}
	std::ifstream inFile(filename.c_str());
	if(!inFile.is_open())
	{
		std::cerr << "Could not open input file" << std::endl;
		return 1;
	}
	std::ofstream  outFile((filename + ".replace") . c_str());
	if(!outFile.is_open())
	{
		std::cerr << "Error: Cannot create output file." << std::endl;
		inFile.close();
		return (1);
	}
	
	std::string line;
	while(std::getline(inFile, line))
	{
		size_t pos = 0;
		while((pos = line.find(s1,pos)) != std::string::npos)
		{
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			pos += s2.length();
		}
		outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
	return(0);
	
}