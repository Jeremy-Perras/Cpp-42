#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog Constuctor" << std::endl;
    this->_type = "Dog";
    this->_Brain = new Brain();
    return ;
}

Dog & Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog Assignement" << std::endl;
    if(this == &rhs)
        return(*this);
    this->_type = rhs._type;
    this->_Brain = new Brain();
    this->_Brain = rhs._Brain;
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
    delete _Brain;
    std::cout << "Dog Destructor" << std::endl;
    return;
}
