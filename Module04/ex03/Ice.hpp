

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    /* data */
public:
    Ice(/* args */);
    ~Ice();

    void message(std::string name) const;
    AMateria* clone() const;
    void use(ICharacter& target);


    Ice(const Ice &other);
    Ice &operator = (const Ice &other);
};

#endif