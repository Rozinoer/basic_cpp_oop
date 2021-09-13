#include "ClapTrap.hpp"
# include <string>

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << C_GREEN << "[ClapTrap]Copy constructor" << C_RESET << std::endl;
    *this = other;
}
 
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << C_GREEN << "[ClapTrap]Assignation operator called" << C_RESET << std::endl;
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
    std::cout << C_YELLOW << "ClapTrap " + this->_Name + " attack " + target
    + ", causing " << this->_attackDamage << " points of damage!" << C_RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Hitpoints > 0)
    {
        this->_Hitpoints -= amount;
        std::cout << C_YELLOW << amount << " point(s) of damage received" << C_RESET << std::endl;
    }
    else
        std::cout << C_RED << "Hitpoints is too low" << C_RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints > amount)
    {   
        this->_Hitpoints += amount;
        this->_energyPoints -= amount;
        std::cout << amount << " point(s) of health restored" << std::endl;
    }
    else
        std::cout << C_RED << "Energy points is too low" << C_RESET << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name)
{
    std::cout << C_GREEN << "[ClapTrap]\tString constructor called (" + this->_Name + ")" << C_RESET << std::endl;
    this->_Hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << C_GREEN << "[ClapTrap]\tDefault constructor called" << C_RESET << std::endl;
    this->_Name = "";
    this->_Hitpoints = 0;
    this->_energyPoints = 0;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << C_RED << "[ClapTrap]\tDefault destructor called" << C_RESET << std::endl;
}