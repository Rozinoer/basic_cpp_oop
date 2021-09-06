 

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure(/* args */);
    ~Cure();

    void message(std::string name) const;
    AMateria* clone() const;
    void use(ICharacter& target);

    Cure(const Cure &other);
    Cure &operator = (const Cure &other);
};

#endif