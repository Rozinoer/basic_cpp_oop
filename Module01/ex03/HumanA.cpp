#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->_name + " attacks with his " + this->_wpn.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wpn) : _name(name), _wpn(wpn)
{
}

HumanA::~HumanA()
{
}