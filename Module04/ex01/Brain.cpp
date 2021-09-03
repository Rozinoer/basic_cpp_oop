#include "Brain.hpp"

Brain::Brain(/* args */)
{
    for( int i = 0; i < 100; i++)
        this->_ideas[i] = "some idea";
}

Brain::~Brain()
{
}

Brain::Brain(Brain const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {

    }
    return *(this);
}