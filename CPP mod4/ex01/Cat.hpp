#ifndef CAT_H

#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat & operator=(Cat const &rhs);
        Cat(Cat const &src);
        ~Cat(void);
        virtual void makeSound(void) const;

    private:
        Brain *_Brain;
};


#endif
