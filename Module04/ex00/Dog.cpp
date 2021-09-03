#include "Dog.hpp"

Dog::Dog(/* args */) : Animal("Dog")
{
    std::cout << this->type << std::endl;
}

Dog::~Dog()
{
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

    }
    return *(this);
}