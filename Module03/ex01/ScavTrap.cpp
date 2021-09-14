#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap const &other)
{
    std::cout << C_GREEN << "[ScavTrap]Copy constructor" << C_RESET << std::endl;
    *this = other;
}
 
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << C_GREEN << "[ScavTrap]Assignation operator called" << C_RESET << std::endl;
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_Hitpoints = other._Hitpoints;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
    }
    return *(this);
}

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout <<C_GREEN << "[ScavTrap]Default constructor called" << C_RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout <<C_GREEN <<  "[ScavTrap] String constructor called" << C_RESET << std::endl;
    this->_Hitpoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << C_RED << "[ScavTrap]Constructor called" << C_RESET << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << C_CYAN << "ScavTrap have enterred in Gate keeper mode." << C_RESET << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << C_CYAN << "ScavTrap " + this->_Name + " attack " + target
    + ", causing " << this->_attackDamage << " points of damage!" << C_RESET << std::endl;
}