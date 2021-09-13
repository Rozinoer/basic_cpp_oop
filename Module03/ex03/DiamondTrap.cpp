#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(/* args */) : _name("def")
{
    std::cout << C_GREEN << "[DiamondTrap]\tBase constructor called" << C_RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << C_GREEN << "[DiamondTrap]\tString constructor called (" + this->_name + ")" << C_RESET << std::endl;
    this->_Hitpoints = FragTrap::_Hitpoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << C_RED << "[DiamondTrap]\tDefault destructor called" << C_RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
    std::cout << C_GREEN << "[DiamondTrap]Copy constructor called" << C_RESET << std::endl;
    *this = other;
}
 
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout <<C_GREEN << "[DiamondTrap]Assignation operator called" << C_RESET << std::endl;
    ScavTrap::operator=(other);
	FragTrap::operator=(other);
    if (this != &other)
    {
        this->_name = other._name;
    }
    return *(this);
}

void DiamondTrap::whoAmI( void )
{
    std::cout << this->_name << std::endl;
    std::cout << this->ClapTrap::_Name << std::endl;
}

int DiamondTrap::getDamage()
{
    return this->_attackDamage;
}