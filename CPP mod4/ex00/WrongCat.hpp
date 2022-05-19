#ifndef WRONGCAT_H

#define WRONGCAT_H
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat & operator=(WrongCat const & rhs);
        WrongCat(WrongCat const &src);
        ~WrongCat(void);
         void makeSound(void) const;
    private:

};



#endif
