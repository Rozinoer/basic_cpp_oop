#include "Weapon.hpp"

void Weapon::setType(std::string type_)
{
    type = type_;
}

Weapon::Weapon(std::string const  &type) : type(type)
{
    
}

Weapon::Weapon()
{

}

std::string const  &Weapon::getType()
{
    return (type);
}

Weapon::~Weapon()
{
}
