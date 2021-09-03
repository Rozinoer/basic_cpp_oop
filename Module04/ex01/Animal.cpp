#include "Animal.hpp"

void Animal::makeSound()
{
    std::cout << "def" << std::endl;
}

Animal::Animal(/* args */)
{
    this->type = "def";
}

Animal::Animal(std::string type)
{
    this->type = type;
}

Animal::~Animal()
{
    std::cout << "Animal distructor called" << std::endl;
}

Animal::Animal(Animal const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->brain = other.brain;
        this->type = other.type;
    }
    return *(this);
}

void Animal::showIdeas()
{
    for (int i = 0; i < 100; i++)
    {
        if (brain)
            std::cout << this->brain->_ideas[i] << std::endl;
    }
}