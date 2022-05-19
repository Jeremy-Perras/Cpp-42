#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta[10];
    for (int i = 0; i < 5 ; i++)
    {
        meta[i] = new Dog();

    }
    for (int i = 5; i < 10; i++)
    {
        meta[i] = new Cat();

    }
    for (int i = 0; i < 10; i++)
    {
        meta[i]->makeSound();
    }

    for (int i = 0; i < 10, i++)
    {
        

    }
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << i2->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // i2->makeSound();
    // delete meta;
    // delete i;
    // delete j;
    // delete meta2;
    // delete i2;

    for (int i = 0; i < 10; i++)
    {
        delete meta[i];
    }
    return 0;
}
