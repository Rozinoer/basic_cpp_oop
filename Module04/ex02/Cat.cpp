#include "Cat.hpp"

Cat::Cat(/* args */)
{
    this->_brain = new Brain();
    this->type = "Cat";
}

void Cat::makeSound() const
{
    std::cout << "🐈: Meow" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat distructor called" << std::endl;
}

void Cat::showIdeas() const
{
    if (this->_brain)
        _brain->showIdea();
}

Cat::Cat(Cat const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        *_brain = *other._brain;
        Animal::operator=(other);
    }
    return *(this);
}