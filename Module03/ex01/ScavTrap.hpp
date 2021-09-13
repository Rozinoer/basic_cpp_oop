#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator = (const ScavTrap &other);
    void attack(std::string const & target);
    void guardGate();
};
