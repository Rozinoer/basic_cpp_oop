

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
private:
    std::string _name;
    AMateria *_spells[4];

public:
    Character(/* args */);
    Character(std::string name);
    ~Character();

    Character(const Character &other);
    Character &operator = (const Character &other);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif