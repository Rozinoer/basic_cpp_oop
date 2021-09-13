#pragma once

#include <iostream>
# define C_CYAN "\e[36m"
# define C_GREEN "\e[32m"
# define C_RED "\e[31m"
# define C_YELLOW "\e[33m"
# define C_RESET "\e[0m"
class ClapTrap
{
protected:
    std::string _Name;
    int _Hitpoints;
    int _energyPoints;
    int _attackDamage;
public:
    ClapTrap(std::string Name);
    ClapTrap();
    virtual ~ClapTrap();
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator = (const ClapTrap &other);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
