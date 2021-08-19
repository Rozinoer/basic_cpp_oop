#include "Karen.hpp"

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
    std::cout << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;
    std::cout << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
    std::cout << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Karen::complain(std::string level)
{
    int lvl = -1;

    std::string s[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR",
    };

    for (int i = 0; i < 4; i++)
    {
        if (s[i] == level)
            lvl = i;
    }
    switch (lvl)
    {
    case -1:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    case 0:
        Karen::debug();
    case 1:
        Karen::info();
    case 2:
        Karen::warning();
    case 3:
        Karen::error();
    default:
        break;
    }
}

Karen::Karen()
{
}

Karen::~Karen()
{
}
