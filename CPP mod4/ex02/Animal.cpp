#include "Animal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "Animal Constuctor" << std::endl;
    return;
}

AAnimal & AAnimal::operator=(AAnimal  const &rhs)
{
    std::cout << "Animal Assignement" << std::endl;
    if(this == &rhs)
        return(*this);
    this->_type = rhs._type;
    return(*this);
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "Animal Copy" << std::endl;
    *this = src;
    return ;
}

std::string AAnimal::getType(void) const
{
    return(this->_type);
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal Destructor" << std::endl;
    return;
}
