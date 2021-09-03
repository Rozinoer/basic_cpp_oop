

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
protected:
       // AMateria *_spells[4];
public:
       virtual ~IMateriaSource() {};
       virtual void learnMateria(AMateria *m) = 0;
       virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif