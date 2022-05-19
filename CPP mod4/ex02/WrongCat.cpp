#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat Constuctor" << std::endl;
    this->_type = "WrongCat";
    return;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << "WrongCat Assignement" << std::endl;
    if(this == &rhs)
        return(*this);
    this->_type = rhs._type;
    return(*this);
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "WrongCat Copy" << std::endl;
    *this = src;
    return;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongMiaouou" << std::endl;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor" << std::endl;
    return;
}
