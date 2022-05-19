# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Constuctor" << std::endl;
    return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{

    std::cout << "WrongAnimal Assignement" << std::endl;
    if(this == &rhs)
        return(*this);
    this->_type = rhs._type;
    return(*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "Animal Copy" << std::endl;
    *this = src;
    return ;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongSong" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return(this->_type);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor" << std::endl;
    return ;
}
