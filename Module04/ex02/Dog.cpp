#include "Dog.hpp"

Dog::Dog(/* args */) : Animal("Dog")
{
    this->brain = new Brain;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog distructor called" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "🐕: Yip" << std::endl;
}

Dog::Dog(Dog const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < this->brain->_ideas->size(); i++)
            this->brain->_ideas[i] = other.brain->_ideas[i];
        this->type = other.type;
    }
    return *(this);
}