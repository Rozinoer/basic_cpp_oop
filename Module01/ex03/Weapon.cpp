#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::Weapon(std::string type)
{
    Weapon::setType(type);
}

Weapon::Weapon()
{
}

std::string const & Weapon::getType()
{
    return this->_type;
}

Weapon::~Weapon()
{
}
