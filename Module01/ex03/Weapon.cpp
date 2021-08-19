#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    this->type = type;
    this->typePtr = &this->type;
}

Weapon::Weapon(std::string type)
{
    Weapon::setType(type);
}

Weapon::Weapon()
{
}

std::string Weapon::getType()
{
    return *(this->typePtr);
}

Weapon::~Weapon()
{
}
