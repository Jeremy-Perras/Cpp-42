#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal Constuctor" << std::endl;
    return;
}

Animal & Animal::operator=(Animal  const &rhs)
{
    std::cout << "Animal Assignement" << std::endl;
    if(this == &rhs)
        return(*this);
    this->_type = rhs._type;
    return(*this);
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal Copy" << std::endl;
    *this = src;
    return ;
}

void Animal::makeSound(void) const
{
    return;
}

std::string Animal::getType(void) const
{
    return(this->_type);
}

Animal::~Animal(void)
{
    std::cout << "Animal Destructor" << std::endl;
    return;
}
