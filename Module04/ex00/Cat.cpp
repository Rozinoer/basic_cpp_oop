#include "Cat.hpp"

Cat::Cat(/* args */) : Animal("Cat")
{

}

void Cat::makeSound()
{
    std::cout << "🐈: Meow" << std::endl;
}

Cat::~Cat()
{
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

    }
    return *(this);
}