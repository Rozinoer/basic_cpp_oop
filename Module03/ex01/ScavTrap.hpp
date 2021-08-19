#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void guardGate();
};
