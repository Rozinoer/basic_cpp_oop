

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
    void attack(std::string const & target);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator = (const ScavTrap &other);
    void guardGate();
};
