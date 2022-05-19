#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Constuctor" << std::endl;
    this->Animal::_type = "Cat"; // peut s'ecrire aussi ainsi
    this->_Brain = new Brain();
    return;
}

Cat & Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat Assignement" << std::endl;
    if(this == &rhs)
        return(*this);
    this->_type = rhs._type;
    this->_Brain = new Brain();
    this->_Brain = rhs._Brain;
    return(*this);
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat Copy" << std::endl;
    *this = src;
    return ;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaouou" << std::endl;
    return ;
}

Cat::~Cat(void)
{
    delete this->_Brain;
    std::cout << "Cat Destructor" << std::endl;
    return;
}
