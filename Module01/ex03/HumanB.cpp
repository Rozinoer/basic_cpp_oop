#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->name + " attacks with his " + this->wpn.getType() << std::endl;
}

void HumanB::setWeapon(Weapon wpn)
{
    this->wpn = wpn;
}

HumanB::HumanB(std::string name, Weapon wpn)
{
    this->name = name;
    this->wpn = wpn;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}