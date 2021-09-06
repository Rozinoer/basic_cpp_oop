#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(/* args */)
{

}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "(DiamondTrap)\tString constructor called (" + this->_name + ")" << std::endl;
    this->_Hitpoints = FragTrap::_Hitpoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "(DiamondTrap)\tDefault destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_Hitpoints = other._Hitpoints;
        this->_Name = other._Name;
        this->_name = other._name;
    }
    return *(this);
}

void DiamondTrap::whoAmI( void )
{
    std::cout << this->_name << std::endl;
    std::cout << this->ClapTrap::_Name << std::endl;
}