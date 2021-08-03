#include "Weapon.hpp"

&typeRef = type;

Weapon::Weapon(std::string type)
{
    this->type = type;
    this->typeRef = this->type;
    Weapon::setType(type);
}

Weapon::Weapon()
{
    this->typeRef = this->type;
}


void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return (this->typeRef);
}

Weapon::~Weapon()
{
}
