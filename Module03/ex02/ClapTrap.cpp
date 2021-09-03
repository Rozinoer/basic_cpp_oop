#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " + this->_Name + " attack " + target
    + ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_Hitpoints -= amount;
    std::cout << amount << " point(s) of damage received" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_Hitpoints += amount;
    this->_energyPoints -= amount;
    std::cout << amount << " point(s) of health restored" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "(ClapTrap)\tString constructor called" << std::endl;
    this->_Name = Name;
    this->_Hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->_Name = "";
    this->_Hitpoints = 0;
    this->_energyPoints = 0;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "(ClapTrap)\tDefault destructor called" << std::endl;
}