#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <unistd.h>

void test()
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
        delete (animal[i]);
    }
}

int main ( void )
{
    test();
    sleep(100);
    return (0);
}