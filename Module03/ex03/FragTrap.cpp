#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    for (int i = 0; i < 5; i++)
        std::cout << C_CYAN << "High fives, my dear ><" << C_RESET << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << C_CYAN << "FragTrap " + this->_Name + " attack " + target
    + ", causing " << this->_attackDamage << " points of damage!" << C_RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
    std::cout << C_GREEN << "[FragTrap]Copy constructor" << C_RESET << std::endl;
    *this = other;
}
 
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << C_GREEN << "[FragTrap]Assignation operator called" << C_RESET << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *(this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << C_GREEN << "[FragTrap]\tString constructor called (" + this->_Name + ")" << C_RESET << std::endl;
    this->_Hitpoints = 100;
    this->_attackDamage = 30;
    this->_energyPoints = 100;
}

FragTrap::FragTrap(/* args */)
{
    std::cout << C_GREEN << "[FragTrap]Default constructor called" << C_RESET << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << C_RED << "[FragTrap]\tDefault destructor called" << C_RESET << std::endl;
}