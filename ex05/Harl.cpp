#include "Harl.hpp"
#include <iostream>

void Harl::debug() 
{
    std::cout << "[ DEBUG ]\n"
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() 
{
    std::cout << "[ INFO ]\n"
              << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
}

void Harl::warning() 
{
    std::cout << "[ WARNING ]\n"
              << "I think I deserve to have some extra bacon for free. I’ve been coming for years!" << std::endl;
}

void Harl::error() 
{
    std::cout << "[ ERROR ]\n"
              << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

//handlers is an array of pointers to functions that return void, take no arguments, and belong to the Harl class.
//handlers is just a local variable that holds pointers to class member functions. 
void Harl::complain(std::string level) 
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*handlers[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*handlers[i])();
            return;
        }
    }

    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
