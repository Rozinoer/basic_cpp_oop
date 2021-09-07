 

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
private:

public:
    AMateria(/* args */);
    AMateria(std::string const & type);
    virtual ~AMateria();

    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void message(std::string name) const = 0;
    virtual void use(ICharacter& target);

    AMateria(const AMateria &other);
    AMateria &operator = (const AMateria &other);
};

#endif
