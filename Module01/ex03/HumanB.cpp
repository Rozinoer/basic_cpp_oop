#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->_wpn)
        std::cout << this->_name + " attacks with his " + this->_wpn->getType() << std::endl;
    else
        std::cout << this->_name + " has not weapon "  << std::endl;
}

void HumanB::setWeapon(Weapon &wpn)
{
    this->_wpn = &wpn;
}

HumanB::HumanB(std::string name) : _name(name), _wpn(NULL)
{

}

HumanB::~HumanB()
{
}