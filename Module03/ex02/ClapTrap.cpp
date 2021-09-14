#include "ClapTrap.hpp"

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
    std::cout << C_CYAN << "ClapTrap " + this->_Name + " attack " + target
    + ", causing " << this->_attackDamage << " points of damage!" << C_RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->_Hitpoints -= amount;
    std::cout <<C_CYAN << amount << " point(s) of damage received" << C_RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_Hitpoints += amount;
    this->_energyPoints -= amount;
    std::cout << C_CYAN << amount << " point(s) of health restored" << C_RESET << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << C_CYAN << "[ClapTrap]\tString constructor called" << C_RESET << std::endl;
    this->_Name = Name;
    this->_Hitpoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << C_CYAN << "[ClapTrap]Default constructor called" << C_RESET << std::endl;
    this->_Name = "";
    this->_Hitpoints = 0;
    this->_energyPoints = 0;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << C_CYAN << "[ClapTrap]\tDefault destructor called" << C_RESET << std::endl;
}