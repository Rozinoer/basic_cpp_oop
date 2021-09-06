#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <unistd.h>

void deepTest()
{
    Animal *wolf =  new Dog("I want to forest", "wolf");
    Animal *dog =  new Dog("I want to home", "dog");
    wolf->showIdeas();
    dog->showIdeas();
    wolf = dog;
    delete dog;
    wolf->showIdeas();
}

int main ( void )
{
    Animal* animal[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
    {
        animal[i]->makeSound();
    }

    // deepTest();
    return (0);
}