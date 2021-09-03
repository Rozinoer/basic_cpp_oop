#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    for (int i = 0; i < 5; i++)
        std::cout << "High fives, my dear ><" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
    std::cout << "(FragTrap)Copy constructor" << std::endl;
    *this = other;
}
 
FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "(FragTrap)Assignation operator called" << std::endl;
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
    std::cout << "(FragTrap)\tString constructor called" << std::endl;
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_attackDamage = 30;
    this->_energyPoints = 100;
}

FragTrap::FragTrap(/* args */)
{
    std::cout << "(FragTrap)Default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "(FragTrap)\tDefault destructor called" << std::endl;
}