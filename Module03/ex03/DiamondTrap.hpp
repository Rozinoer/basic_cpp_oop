#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    void whoAmI( void );
    using FragTrap::attack;
    int getDamage();
    DiamondTrap(/* args */);
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &other);
    DiamondTrap &operator = (const DiamondTrap &other);
};
