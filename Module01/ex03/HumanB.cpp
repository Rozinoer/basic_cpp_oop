#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->_wpn)
        std::cout << this->_name + " attacks with his " + this->_wpn->getType() << std::endl;
    else
<<<<<<< HEAD
        std::cout << this->_name + " has no weapon " << std::endl;

}

void HumanB::setWeapon(Weapon &wpn)
{
    if (this->_wpn == NULL)
        this->_wpn = &wpn;
}

HumanB::HumanB(std::string name) : _name(name), _wpn(NULL)
{
    
=======
        std::cout << this->_name + " has not weapon "  << std::endl;
}

void HumanB::setWeapon(Weapon &wpn)
{
    this->_wpn = &wpn;
}

HumanB::HumanB(std::string name) : _name(name), _wpn(NULL)
{

>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
}

HumanB::~HumanB()
{
}