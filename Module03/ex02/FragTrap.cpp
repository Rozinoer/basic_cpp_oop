#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    for (int i = 0; i < 5; i++)
        std::cout << C_CYAN << "[FragTrap]High fives, my dear ><" << C_RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
    std::cout << C_CYAN << "[FragTrap]Copy constructor" << C_RESET << std::endl;
    *this = other;
}
 
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << C_CYAN << "[FragTrap]Assignation operator called" << C_RESET << std::endl;
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_Hitpoints = other._Hitpoints;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
    }
    return *(this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout <<C_CYAN << "[FragTrap]String constructor called" << C_RESET << std::endl;
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_attackDamage = 30;
    this->_energyPoints = 100;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << C_CYAN << "FragTrap " + this->_Name + " attack " + target
    + ", causing " << this->_attackDamage << " points of damage!"<< C_RESET << std::endl;
}

FragTrap::FragTrap(/* args */)
{
    std::cout << C_GREEN << "(FragTrap)Default constructor called" << C_RESET << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << C_RED <<"(FragTrap)\tDefault destructor called" << C_RESET << std::endl;
}