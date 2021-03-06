#include "Brain.hpp"

Brain::Brain(/* args */)
{
    for( int i = 0; i < 100; i++)
        this->_ideas[i] = "some idea";
}

Brain::Brain(std::string idea)
{
    for( int i = 0; i < 100; i++)
        this->_ideas[i] = idea;
}

Brain::~Brain()
{
}

void Brain::showIdea() const
{
    for (int i = 0; i < 100; i++)
            std::cout << this->_ideas[i] << std::endl;
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
        for (int i = 0; i < this->_ideas->size(); i++)
            this->_ideas[i] = other._ideas[i];
    }
    return *(this);
}