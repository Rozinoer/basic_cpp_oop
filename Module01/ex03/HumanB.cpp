#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->_wpn)
        std::cout << this->_name + " attacks with his " + this->_wpn->getType() << std::endl;
    else
        std::cout << this->_name + " has no weapon " << std::endl;

}

void HumanB::setWeapon(Weapon &wpn)
{
    if (this->_wpn == NULL)
        this->_wpn = &wpn;
}

HumanB::HumanB(std::string name) : _name(name), _wpn(NULL)
{
    
}

HumanB::~HumanB()
{
}