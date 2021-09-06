#pragma once

#include <iostream>

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
