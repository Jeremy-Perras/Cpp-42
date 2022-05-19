#ifndef DOG_H

# define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public :
        Dog(void);
        Dog & operator=(Dog const & rhs);
        Dog(Dog const &src);
        ~Dog();
        virtual void makeSound(void) const;
        Brain* getBrain(void) const;
    private :
        Brain *_Brain;
};


# endif
