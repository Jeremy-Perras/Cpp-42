#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Constuctor" << std::endl;
    this->_type = "Dog";
    return ;
}

Dog & Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog Assignement" << std::endl;
    if(this == &rhs)
        return(*this);
    this->_type = rhs._type;
    return(*this);
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog Copy" << std::endl;
    *this = src;
    return ;
}

void Dog::makeSound(void) const
{
    std::cout << "Wouaf Wouaf" << std::endl;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog Destructor" << std::endl;
    return;
}
