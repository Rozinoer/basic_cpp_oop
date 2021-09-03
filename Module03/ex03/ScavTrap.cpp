#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    
}
ScavTrap::ScavTrap(ScavTrap const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_Hitpoints = other._Hitpoints;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
    }
    return *(this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "(ScavTrap)\tString constructor called (" + this->_Name + ")" << std::endl;
    this->_Hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "(ScavTrap)\tDefault destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}