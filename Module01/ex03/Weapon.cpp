#include "Weapon.hpp"

void Weapon::setType(std::string type_)
{
<<<<<<< HEAD
    type = type_;
=======
    this->_type = type;
>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
}

Weapon::Weapon(std::string const  &type) : type(type)
{
    
}

Weapon::Weapon()
{

}

<<<<<<< HEAD
std::string const  &Weapon::getType()
{
    return (type);
=======
std::string const & Weapon::getType()
{
    return this->_type;
>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
}

Weapon::~Weapon()
{
}
