#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "****New BRAIN in OUR world ****" << std::endl;
    for( int i = 0; i < 100; i++)
        this->_ideas[i] = "some idea";
}

Brain::Brain(std::string idea)
{
    for( int i = 0; i < 100; i++)
        this->_ideas[i] = idea;
}

void Brain::showIdea() const
{
    for (int i = 0; i < 100; i++)
            std::cout << this->_ideas[i] << std::endl;
}

Brain::~Brain()
{
    std::cout << "****BRAIN is not in OUR world anymore****" << std::endl;
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
        for (size_t i = 0; i < this->_ideas->size(); i++)
            this->_ideas[i] = other._ideas[i];
    }
    return *(this);
}