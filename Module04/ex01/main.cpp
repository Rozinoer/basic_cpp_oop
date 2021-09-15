#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <unistd.h>

void deepTest()
{
    // Dog wolf("I want to forest yep", "wolf");
    // Dog dog("I want to home", "dog");
    // Dog b("qwe", "b");
    // Dog a("abc", "a");
    // a.makeSound();
    // b.makeSound();
    // wolf = dog;
    // Dog *wolf = new Dog("q", "wolf");
    // Dog *dog = new Dog("q", "dog");
    // wolf = dog;
    // delete dog;
    // delete wolf;
    // delete dog;
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

    deepTest();
    sleep(1000);
    return (0);
}