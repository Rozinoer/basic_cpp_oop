#include "Character.hpp"

Character::Character(/* args */) : _name("Default")
{
    std::cout << "[Character]\tDefault constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_spells[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    std::cout << "[Character]\tString constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_spells[i] = NULL;
}

Character::~Character()
{
}

Character::Character(Character const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
Character &Character::operator=(const Character &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
            this->_spells[i] = other._spells[i];
    }
    return *(this);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_spells[i] == 0)
        {
            this->_spells[i] = m;
            break ;
        }
    }
}
void Character::unequip(int idx)
{
    if (this->_spells[idx] && this->_spells[idx] != NULL)
    {    
        this->_spells[idx] = NULL;
    }
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >=0 && idx < 4)
        _spells[idx]->use(target);
}