#include "Dog.hpp"

Dog::Dog(/* args */)
{
    this->_brain = new Brain;
    this->type = "Dog";
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog distructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "🐕: Yip" << std::endl;
}

void Dog::showIdeas() const
{
    if (this->_brain)
        _brain->showIdea();
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
        *_brain = *other._brain;
        Animal::operator=(other);
    }
    return *(this);
}