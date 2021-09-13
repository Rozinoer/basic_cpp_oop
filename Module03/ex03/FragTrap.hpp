#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    FragTrap(/* args */);
    FragTrap(std::string name);
    ~FragTrap();
    void attack(std::string const & target);
    void highFivesGuys(void);
    FragTrap(const FragTrap &other);
    FragTrap &operator = (const FragTrap &other);
};
